/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@interface BrowserSessionPersistentState : NSObject {

	Vector<BrowserWindowPersistentState *, 0, WTF::CrashOnOverflow>* _windowStates;

}
-(char)containsAnyURLs;
-(void)restoreSession;
-(id)initFromCurrentSession;
-(id)initFromFile:(id)arg1 ;
-(id)data;
@end

