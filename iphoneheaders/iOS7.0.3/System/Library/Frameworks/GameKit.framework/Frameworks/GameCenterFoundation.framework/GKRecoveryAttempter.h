/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface GKRecoveryAttempter : NSObject {

	/*^block*/ id _attemptRecovery;

}
+(id)recoveryAttempterUsingHandler:(/*^block*/ id)arg1 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)dealloc;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned)arg2 ;
@end
