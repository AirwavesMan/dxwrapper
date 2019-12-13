#pragma once

#define VISIT_PROCS_WSOCK32(visit) \
	visit(accept, jmpaddr) \
	visit(bind, jmpaddr) \
	visit(closesocket, jmpaddr) \
	visit(connect, jmpaddr) \
	visit(getpeername, jmpaddr) \
	visit(getsockname, jmpaddr) \
	visit(getsockopt, jmpaddr) \
	visit(htonl, jmpaddr) \
	visit(htons, jmpaddr) \
	visit(inet_addr, jmpaddr) \
	visit(inet_ntoa, jmpaddr) \
	visit(ioctlsocket, jmpaddr) \
	visit(listen, jmpaddr) \
	visit(ntohl, jmpaddr) \
	visit(ntohs, jmpaddr) \
	visit(recv, jmpaddr) \
	visit(recvfrom, jmpaddr) \
	visit(select, jmpaddr) \
	visit(send, jmpaddr) \
	visit(sendto, jmpaddr) \
	visit(setsockopt, jmpaddr) \
	visit(shutdown, jmpaddr) \
	visit(socket, jmpaddr) \
	visit(MigrateWinsockConfiguration, jmpaddr) \
	visit(gethostbyaddr, jmpaddr) \
	visit(gethostbyname, jmpaddr) \
	visit(getprotobyname, jmpaddr) \
	visit(getprotobynumber, jmpaddr) \
	visit(getservbyname, jmpaddr) \
	visit(getservbyport, jmpaddr) \
	visit(gethostname, jmpaddr) \
	visit(WSAAsyncSelect, jmpaddr) \
	visit(WSAAsyncGetHostByAddr, jmpaddr) \
	visit(WSAAsyncGetHostByName, jmpaddr) \
	visit(WSAAsyncGetProtoByNumber, jmpaddr) \
	visit(WSAAsyncGetProtoByName, jmpaddr) \
	visit(WSAAsyncGetServByPort, jmpaddr) \
	visit(WSAAsyncGetServByName, jmpaddr) \
	visit(WSACancelAsyncRequest, jmpaddr) \
	visit(WSASetBlockingHook, jmpaddr) \
	visit(WSAUnhookBlockingHook, jmpaddr) \
	visit(WSAGetLastError, jmpaddr) \
	visit(WSASetLastError, jmpaddr) \
	visit(WSACancelBlockingCall, jmpaddr) \
	visit(WSAIsBlocking, jmpaddr) \
	visit(WSAStartup, jmpaddr) \
	visit(WSACleanup, jmpaddr) \
	visit(__WSAFDIsSet, jmpaddr) \
	visit(WEP, jmpaddr) \
	visit(WSApSetPostRoutine, jmpaddr) \
	visit(WsControl, jmpaddr) \
	visit(closesockinfo, jmpaddr) \
	visit(Arecv, jmpaddr) \
	visit(Asend, jmpaddr) \
	visit(WSHEnumProtocols, jmpaddr) \
	visit(inet_network, jmpaddr) \
	visit(getnetbyname, jmpaddr) \
	visit(rcmd, jmpaddr) \
	visit(rexec, jmpaddr) \
	visit(rresvport, jmpaddr) \
	visit(sethostname, jmpaddr) \
	visit(dn_expand, jmpaddr) \
	visit(WSARecvEx, jmpaddr) \
	visit(s_perror, jmpaddr) \
	visit(GetAddressByNameA, jmpaddr) \
	visit(GetAddressByNameW, jmpaddr) \
	visit(EnumProtocolsA, jmpaddr) \
	visit(EnumProtocolsW, jmpaddr) \
	visit(GetTypeByNameA, jmpaddr) \
	visit(GetTypeByNameW, jmpaddr) \
	visit(GetNameByTypeA, jmpaddr) \
	visit(GetNameByTypeW, jmpaddr) \
	visit(SetServiceA, jmpaddr) \
	visit(SetServiceW, jmpaddr) \
	visit(GetServiceA, jmpaddr) \
	visit(GetServiceW, jmpaddr) \
	visit(NPLoadNameSpaces, jmpaddr) \
	visit(NSPStartup, jmpaddr) \
	visit(TransmitFile, jmpaddr) \
	visit(AcceptEx, jmpaddr) \
	visit(GetAcceptExSockaddrs, jmpaddr)

#ifdef PROC_CLASS
PROC_CLASS(wsock32, dll, VISIT_PROCS_WSOCK32, VISIT_PROCS_BLANK)
#endif