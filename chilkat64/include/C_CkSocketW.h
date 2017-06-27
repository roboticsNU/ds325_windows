// This is a generated source file for Chilkat version 9.5.0.66
#ifndef _C_CkSocketWH
#define _C_CkSocketWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC void CkSocketW_setAbortCheck(HCkSocketW cHandle, BOOL (*fnAbortCheck)());
CK_VISIBLE_PUBLIC void CkSocketW_setPercentDone(HCkSocketW cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_VISIBLE_PUBLIC void CkSocketW_setProgressInfo(HCkSocketW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_VISIBLE_PUBLIC void CkSocketW_setTaskCompleted(HCkSocketW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_VISIBLE_PUBLIC HCkSocketW CkSocketW_Create(void);
CK_VISIBLE_PUBLIC void CkSocketW_Dispose(HCkSocketW handle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAbortCurrent(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putAbortCurrent(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getAcceptFailReason(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncAcceptFinished(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getAsyncAcceptLog(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_asyncAcceptLog(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncAcceptSuccess(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncConnectFinished(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getAsyncConnectLog(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_asyncConnectLog(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncConnectSuccess(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncDnsFinished(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getAsyncDnsLog(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_asyncDnsLog(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getAsyncDnsResult(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_asyncDnsResult(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncDnsSuccess(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getAsyncReceivedBytes(HCkSocketW cHandle, HCkByteData retval);
CK_VISIBLE_PUBLIC void CkSocketW_getAsyncReceivedString(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_asyncReceivedString(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncReceiveFinished(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getAsyncReceiveLog(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_asyncReceiveLog(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncReceiveSuccess(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncSendFinished(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getAsyncSendLog(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_asyncSendLog(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getAsyncSendSuccess(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getBandwidthThrottleDown(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putBandwidthThrottleDown(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getBandwidthThrottleUp(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putBandwidthThrottleUp(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getBigEndian(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putBigEndian(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getClientIpAddress(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putClientIpAddress(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_clientIpAddress(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getClientPort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putClientPort(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getConnectFailReason(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getDebugConnectDelayMs(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putDebugConnectDelayMs(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getDebugDnsDelayMs(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putDebugDnsDelayMs(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getDebugLogFilePath(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putDebugLogFilePath(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_debugLogFilePath(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getElapsedSeconds(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getHeartbeatMs(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putHeartbeatMs(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getHttpProxyAuthMethod(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putHttpProxyAuthMethod(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_httpProxyAuthMethod(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getHttpProxyDomain(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putHttpProxyDomain(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_httpProxyDomain(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getHttpProxyHostname(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putHttpProxyHostname(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_httpProxyHostname(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getHttpProxyPassword(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putHttpProxyPassword(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_httpProxyPassword(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getHttpProxyPort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putHttpProxyPort(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getHttpProxyUsername(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putHttpProxyUsername(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_httpProxyUsername(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getIsConnected(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getKeepAlive(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putKeepAlive(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getKeepSessionLog(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putKeepSessionLog(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getLastErrorHtml(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_lastErrorHtml(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getLastErrorText(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_lastErrorText(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getLastErrorXml(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_lastErrorXml(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getLastMethodFailed(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getLastMethodSuccess(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putLastMethodSuccess(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getListenIpv6(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putListenIpv6(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getListenPort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getLocalIpAddress(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_localIpAddress(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getLocalPort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getMaxReadIdleMs(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putMaxReadIdleMs(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getMaxSendIdleMs(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putMaxSendIdleMs(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getMyIpAddress(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_myIpAddress(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getNumReceivedClientCerts(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getNumSocketsInSet(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getNumSslAcceptableClientCAs(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getObjectId(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getPercentDoneScale(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putPercentDoneScale(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getPreferIpv6(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putPreferIpv6(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getReceivedCount(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putReceivedCount(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getReceivedInt(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putReceivedInt(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getReceiveFailReason(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getReceivePacketSize(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putReceivePacketSize(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getRemoteIpAddress(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_remoteIpAddress(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getRemotePort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getRequireSslCertVerify(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putRequireSslCertVerify(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getSelectorIndex(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSelectorIndex(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getSelectorReadIndex(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSelectorReadIndex(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getSelectorWriteIndex(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSelectorWriteIndex(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getSendFailReason(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getSendPacketSize(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSendPacketSize(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getSessionLog(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_sessionLog(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getSessionLogEncoding(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putSessionLogEncoding(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_sessionLogEncoding(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getSocksHostname(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putSocksHostname(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_socksHostname(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getSocksPassword(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putSocksPassword(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_socksPassword(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getSocksPort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSocksPort(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getSocksUsername(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putSocksUsername(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_socksUsername(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC int CkSocketW_getSocksVersion(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSocksVersion(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getSoRcvBuf(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSoRcvBuf(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getSoReuseAddr(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSoReuseAddr(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSocketW_getSoSndBuf(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSoSndBuf(HCkSocketW cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getSsl(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putSsl(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getSslAllowedCiphers(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putSslAllowedCiphers(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_sslAllowedCiphers(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getSslProtocol(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putSslProtocol(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_sslProtocol(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getStringCharset(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putStringCharset(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_stringCharset(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getTcpNoDelay(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putTcpNoDelay(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getTlsCipherSuite(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_tlsCipherSuite(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getTlsPinSet(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putTlsPinSet(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_tlsPinSet(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getTlsVersion(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_tlsVersion(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_getUserData(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSocketW_putUserData(HCkSocketW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_userData(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_getVerboseLogging(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void  CkSocketW_putVerboseLogging(HCkSocketW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSocketW_getVersion(HCkSocketW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_version(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkSocketW CkSocketW_AcceptNextConnection(HCkSocketW cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_AcceptNextConnectionAsync(HCkSocketW cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AddSslAcceptableClientCaDn(HCkSocketW cHandle, const wchar_t *certAuthDN);
CK_VISIBLE_PUBLIC void CkSocketW_AsyncAcceptAbort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkSocketW CkSocketW_AsyncAcceptSocket(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncAcceptStart(HCkSocketW cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC void CkSocketW_AsyncConnectAbort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncConnectStart(HCkSocketW cHandle, const wchar_t *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC void CkSocketW_AsyncDnsAbort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncDnsStart(HCkSocketW cHandle, const wchar_t *hostname, int maxWaitMs);
CK_VISIBLE_PUBLIC void CkSocketW_AsyncReceiveAbort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncReceiveBytes(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncReceiveBytesN(HCkSocketW cHandle, unsigned long numBytes);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncReceiveString(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncReceiveToCRLF(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncReceiveUntilMatch(HCkSocketW cHandle, const wchar_t *matchStr);
CK_VISIBLE_PUBLIC void CkSocketW_AsyncSendAbort(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncSendByteData(HCkSocketW cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncSendBytes(HCkSocketW cHandle, HCkByteData byteData);
CK_VISIBLE_PUBLIC BOOL CkSocketW_AsyncSendString(HCkSocketW cHandle, const wchar_t *stringToSend);
CK_VISIBLE_PUBLIC BOOL CkSocketW_BindAndListen(HCkSocketW cHandle, int port, int backLog);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_BindAndListenAsync(HCkSocketW cHandle, int port, int backLog);
CK_VISIBLE_PUBLIC BOOL CkSocketW_BuildHttpGetRequest(HCkSocketW cHandle, const wchar_t *url, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_buildHttpGetRequest(HCkSocketW cHandle, const wchar_t *url);
CK_VISIBLE_PUBLIC int CkSocketW_CheckWriteable(HCkSocketW cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_CheckWriteableAsync(HCkSocketW cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC void CkSocketW_ClearSessionLog(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkSocketW CkSocketW_CloneSocket(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_Close(HCkSocketW cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_CloseAsync(HCkSocketW cHandle, int maxWaitMs);
CK_VISIBLE_PUBLIC BOOL CkSocketW_Connect(HCkSocketW cHandle, const wchar_t *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ConnectAsync(HCkSocketW cHandle, const wchar_t *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ConvertFromSsl(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ConvertFromSslAsync(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ConvertToSsl(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ConvertToSslAsync(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC void CkSocketW_DnsCacheClear(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_DnsLookup(HCkSocketW cHandle, const wchar_t *hostname, int maxWaitMs, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_dnsLookup(HCkSocketW cHandle, const wchar_t *hostname, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_DnsLookupAsync(HCkSocketW cHandle, const wchar_t *hostname, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkCertW CkSocketW_GetMyCert(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkCertW CkSocketW_GetReceivedClientCert(HCkSocketW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkSocketW_GetSslAcceptableClientCaDn(HCkSocketW cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_getSslAcceptableClientCaDn(HCkSocketW cHandle, int index);
CK_VISIBLE_PUBLIC HCkCertW CkSocketW_GetSslServerCert(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_InitSslServer(HCkSocketW cHandle, HCkCertW cert);
CK_VISIBLE_PUBLIC BOOL CkSocketW_IsUnlocked(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_LoadTaskResult(HCkSocketW cHandle, HCkTaskW task);
CK_VISIBLE_PUBLIC BOOL CkSocketW_PollDataAvailable(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_PollDataAvailableAsync(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveBd(HCkSocketW cHandle, HCkBinDataW binData);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveBdAsync(HCkSocketW cHandle, HCkBinDataW binData);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveBdN(HCkSocketW cHandle, unsigned long numBytes, HCkBinDataW binData);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveBdNAsync(HCkSocketW cHandle, unsigned long numBytes, HCkBinDataW binData);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveByte(HCkSocketW cHandle, BOOL bUnsigned);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveByteAsync(HCkSocketW cHandle, BOOL bUnsigned);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveBytes(HCkSocketW cHandle, HCkByteData outData);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveBytesAsync(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveBytesENC(HCkSocketW cHandle, const wchar_t *encodingAlg, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_receiveBytesENC(HCkSocketW cHandle, const wchar_t *encodingAlg);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveBytesENCAsync(HCkSocketW cHandle, const wchar_t *encodingAlg);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveBytesN(HCkSocketW cHandle, unsigned long numBytes, HCkByteData outData);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveBytesNAsync(HCkSocketW cHandle, unsigned long numBytes);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveBytesToFile(HCkSocketW cHandle, const wchar_t *appendFilename);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveBytesToFileAsync(HCkSocketW cHandle, const wchar_t *appendFilename);
CK_VISIBLE_PUBLIC int CkSocketW_ReceiveCount(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveCountAsync(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveInt16(HCkSocketW cHandle, BOOL bigEndian, BOOL bUnsigned);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveInt16Async(HCkSocketW cHandle, BOOL bigEndian, BOOL bUnsigned);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveInt32(HCkSocketW cHandle, BOOL bigEndian);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveInt32Async(HCkSocketW cHandle, BOOL bigEndian);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveNBytesENC(HCkSocketW cHandle, unsigned long numBytes, const wchar_t *encodingAlg, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_receiveNBytesENC(HCkSocketW cHandle, unsigned long numBytes, const wchar_t *encodingAlg);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveNBytesENCAsync(HCkSocketW cHandle, unsigned long numBytes, const wchar_t *encodingAlg);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveSb(HCkSocketW cHandle, HCkStringBuilderW sb);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveSbAsync(HCkSocketW cHandle, HCkStringBuilderW sb);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveString(HCkSocketW cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_receiveString(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveStringAsync(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveStringMaxN(HCkSocketW cHandle, int maxByteCount, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_receiveStringMaxN(HCkSocketW cHandle, int maxByteCount);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveStringMaxNAsync(HCkSocketW cHandle, int maxByteCount);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveStringUntilByte(HCkSocketW cHandle, int lookForByte, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_receiveStringUntilByte(HCkSocketW cHandle, int lookForByte);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveStringUntilByteAsync(HCkSocketW cHandle, int lookForByte);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveToCRLF(HCkSocketW cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_receiveToCRLF(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveToCRLFAsync(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveUntilByte(HCkSocketW cHandle, int lookForByte, HCkByteData outBytes);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveUntilByteAsync(HCkSocketW cHandle, int lookForByte);
CK_VISIBLE_PUBLIC BOOL CkSocketW_ReceiveUntilMatch(HCkSocketW cHandle, const wchar_t *matchStr, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkSocketW_receiveUntilMatch(HCkSocketW cHandle, const wchar_t *matchStr);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_ReceiveUntilMatchAsync(HCkSocketW cHandle, const wchar_t *matchStr);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SaveLastError(HCkSocketW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC int CkSocketW_SelectForReading(HCkSocketW cHandle, int timeoutMs);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SelectForReadingAsync(HCkSocketW cHandle, int timeoutMs);
CK_VISIBLE_PUBLIC int CkSocketW_SelectForWriting(HCkSocketW cHandle, int timeoutMs);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SelectForWritingAsync(HCkSocketW cHandle, int timeoutMs);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SendBd(HCkSocketW cHandle, HCkBinDataW binData, unsigned long offset, unsigned long numBytes);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SendBdAsync(HCkSocketW cHandle, HCkBinDataW binData, unsigned long offset, unsigned long numBytes);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SendByte(HCkSocketW cHandle, int value);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SendByteAsync(HCkSocketW cHandle, int value);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SendBytes(HCkSocketW cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SendBytesAsync(HCkSocketW cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SendBytesENC(HCkSocketW cHandle, const wchar_t *encodedBytes, const wchar_t *encodingAlg);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SendBytesENCAsync(HCkSocketW cHandle, const wchar_t *encodedBytes, const wchar_t *encodingAlg);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SendCount(HCkSocketW cHandle, int byteCount);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SendCountAsync(HCkSocketW cHandle, int byteCount);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SendInt16(HCkSocketW cHandle, int value, BOOL bigEndian);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SendInt16Async(HCkSocketW cHandle, int value, BOOL bigEndian);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SendInt32(HCkSocketW cHandle, int value, BOOL bigEndian);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SendInt32Async(HCkSocketW cHandle, int value, BOOL bigEndian);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SendSb(HCkSocketW cHandle, HCkStringBuilderW sb);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SendSbAsync(HCkSocketW cHandle, HCkStringBuilderW sb);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SendString(HCkSocketW cHandle, const wchar_t *stringToSend);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SendStringAsync(HCkSocketW cHandle, const wchar_t *stringToSend);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SetSslClientCert(HCkSocketW cHandle, HCkCertW cert);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SetSslClientCertPem(HCkSocketW cHandle, const wchar_t *pemDataOrFilename, const wchar_t *pemPassword);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SetSslClientCertPfx(HCkSocketW cHandle, const wchar_t *pfxFilename, const wchar_t *pfxPassword);
CK_VISIBLE_PUBLIC void CkSocketW_SleepMs(HCkSocketW cHandle, int millisec);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SshAuthenticatePk(HCkSocketW cHandle, const wchar_t *sshLogin, HCkSshKeyW privateKey);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SshAuthenticatePkAsync(HCkSocketW cHandle, const wchar_t *sshLogin, HCkSshKeyW privateKey);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SshAuthenticatePw(HCkSocketW cHandle, const wchar_t *sshLogin, const wchar_t *sshPassword);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SshAuthenticatePwAsync(HCkSocketW cHandle, const wchar_t *sshLogin, const wchar_t *sshPassword);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SshCloseTunnel(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SshCloseTunnelAsync(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkSocketW CkSocketW_SshOpenChannel(HCkSocketW cHandle, const wchar_t *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SshOpenChannelAsync(HCkSocketW cHandle, const wchar_t *hostname, int port, BOOL ssl, int maxWaitMs);
CK_VISIBLE_PUBLIC BOOL CkSocketW_SshOpenTunnel(HCkSocketW cHandle, const wchar_t *sshHostname, int sshPort);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_SshOpenTunnelAsync(HCkSocketW cHandle, const wchar_t *sshHostname, int sshPort);
CK_VISIBLE_PUBLIC void CkSocketW_StartTiming(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_TakeSocket(HCkSocketW cHandle, HCkSocketW sock);
CK_VISIBLE_PUBLIC BOOL CkSocketW_TlsRenegotiate(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC HCkTaskW CkSocketW_TlsRenegotiateAsync(HCkSocketW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSocketW_UnlockComponent(HCkSocketW cHandle, const wchar_t *unlockCode);
CK_VISIBLE_PUBLIC BOOL CkSocketW_UseSsh(HCkSocketW cHandle, HCkSshW ssh);
#endif
