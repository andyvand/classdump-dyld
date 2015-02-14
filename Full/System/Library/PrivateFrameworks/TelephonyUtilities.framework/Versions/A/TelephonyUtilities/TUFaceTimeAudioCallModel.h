/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCallModel.h>

@interface TUFaceTimeAudioCallModel : TUCallModel
+(id)sharedInstance;
-(int)ambiguityState;
-(char)isSwappable;
-(char)isMergeable;
-(char)isHoldAllowed;
-(char)isAddCallAllowed;
-(char)isTakingCallsPrivateAllowed;
-(char)isHardPauseAvailable;
-(char)isEndAndAnswerAllowed;
-(char)isHoldAndAnswerAllowed;
-(char)isSendToVoicemailAllowed;
@end

