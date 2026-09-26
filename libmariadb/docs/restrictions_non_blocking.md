## Restrictions

## DNS (Domain Name System)

When `mysql_real_connect_start()` is passed a hostname (as opposed to a local unix socket or an IP address, it may need to look up the hostname in DNS, depending on local host configuration (e.g. if the name is not in /etc/hosts or cached). Such DNS lookups do not happen in a non-blocking way. This means that 'mysql_real_connect_start()' will not return control to the application while waiting for the DNS response. Thus the application may "hang" for some time if DNS is slow or non-functional.

If this is a problem, the application can pass an IP address to `mysql_real_connect_start()` instead of a hostname, which avoids the problem. The IP address can be obtained by the application with whatever non-blocking DNS loopup operation is available to it from the operating system or event framework used. Alternatively, a simple solution may be to just add the hostname to the local host lookup file (/etc/hosts on Posix/Unix/Linux machines).

### Windows Named Pipes and Shared Memory connections

There is no support in the non-blocking API for connections using Windows named pipes or shared memory

Named pipes and shared memory can still be used, using either the blocking or the non-blocking API. However, operations that need to wait on I/O on the named pipe will not return control to the application; instead they will "hang" waiting for the operation to complete, just like the normal blocking API calls.