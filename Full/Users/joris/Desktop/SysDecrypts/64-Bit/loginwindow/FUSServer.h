/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/loginwindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FUSServer : NSObject {

	char mSwitchInProgress;
	char mFUSServerRunning;
	unsigned mNewSID;

}
+(id)sharedFUSServer;
-(char)startServer;
-(void)stopServer;
-(void)unregisterForSessionReady;
-(void)sessionIsReadyReceived:(id)arg1 ;
-(id)userData:(id)arg1 ;
-(void)registerForSessionReady;
-(int)authenticateUser:(id)arg1 password:(id*)arg2 ;
-(unsigned)getUid:(id)arg1 ;
-(unsigned)findSessionForUser:(unsigned)arg1 ;
-(char)createNewSession:(id)arg1 password:(id)arg2 ;
-(void)fakeSessionReadyForFUSFromNonConsoleUser;
-(id)getPassword:(id)arg1 ;
-(unsigned)getSessionID:(id)arg1 ;
-(char)isGuestUser:(id)arg1 ;
-(void)switchToUserOnThread:(id)arg1 ;
-(char)switchToLoginWindow;
-(char)switchToUser:(bycopy id)arg1 ;
-(id)init;
-(void)dealloc;
@end
