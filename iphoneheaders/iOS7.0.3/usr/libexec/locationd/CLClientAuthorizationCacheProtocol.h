/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:52:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CLClientAuthorizationCacheProtocol <CLIntersiloServiceProtocol>
@required
-(int)syncgetAuthorizationOfClient:(id)arg1 forServiceMask:(unsigned)arg2;
-(void)setClient:(id)arg1 authorization:(int)arg2 forMask:(unsigned)arg3;
-(void)clearAuthorizationOfClients;
-(void)setAllClients:(id)arg1;
-(void)clearAuthorizationOfClient:(id)arg1;
@end
