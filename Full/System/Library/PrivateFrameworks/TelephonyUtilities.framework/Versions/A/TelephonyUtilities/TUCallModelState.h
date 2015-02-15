/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/NSSecureCoding.h>

@interface TUCallModelState : NSObject <NSSecureCoding> {

	char _ambiguous;
	char _swappable;
	char _mergeable;
	char _holdAllowed;
	char _addCallAllowed;
	char _takingCallsPrivateAllowed;
	char _hardPauseAvailable;
	char _endAndAnswerAllowed;
	char _holdAndAnswerAllowed;
	char _sendToVoicemailAllowed;
	int _ambiguityState;

}

@property (getter=isAmbiguous,nonatomic,readonly) char ambiguous;                                            //@synthesize ambiguous=_ambiguous - In the implementation block
@property (assign,nonatomic) int ambiguityState;                                                             //@synthesize ambiguityState=_ambiguityState - In the implementation block
@property (assign,getter=isSwappable,nonatomic) char swappable;                                              //@synthesize swappable=_swappable - In the implementation block
@property (assign,getter=isMergeable,nonatomic) char mergeable;                                              //@synthesize mergeable=_mergeable - In the implementation block
@property (assign,getter=isHoldAllowed,nonatomic) char holdAllowed;                                          //@synthesize holdAllowed=_holdAllowed - In the implementation block
@property (assign,getter=isAddCallAllowed,nonatomic) char addCallAllowed;                                    //@synthesize addCallAllowed=_addCallAllowed - In the implementation block
@property (assign,getter=isTakingCallsPrivateAllowed,nonatomic) char takingCallsPrivateAllowed;              //@synthesize takingCallsPrivateAllowed=_takingCallsPrivateAllowed - In the implementation block
@property (assign,getter=isHardPauseAvailable,nonatomic) char hardPauseAvailable;                            //@synthesize hardPauseAvailable=_hardPauseAvailable - In the implementation block
@property (assign,getter=isEndAndAnswerAllowed,nonatomic) char endAndAnswerAllowed;                          //@synthesize endAndAnswerAllowed=_endAndAnswerAllowed - In the implementation block
@property (assign,getter=isHoldAndAnswerAllowed,nonatomic) char holdAndAnswerAllowed;                        //@synthesize holdAndAnswerAllowed=_holdAndAnswerAllowed - In the implementation block
@property (assign,getter=isSendToVoicemailAllowed,nonatomic) char sendToVoicemailAllowed;                    //@synthesize sendToVoicemailAllowed=_sendToVoicemailAllowed - In the implementation block
+(char)supportsSecureCoding;
-(int)ambiguityState;
-(void)setAmbiguityState:(int)arg1 ;
-(char)isSwappable;
-(void)setSwappable:(char)arg1 ;
-(char)isMergeable;
-(void)setMergeable:(char)arg1 ;
-(char)isHoldAllowed;
-(void)setHoldAllowed:(char)arg1 ;
-(char)isAddCallAllowed;
-(void)setAddCallAllowed:(char)arg1 ;
-(char)isTakingCallsPrivateAllowed;
-(void)setTakingCallsPrivateAllowed:(char)arg1 ;
-(char)isHardPauseAvailable;
-(void)setHardPauseAvailable:(char)arg1 ;
-(char)isEndAndAnswerAllowed;
-(void)setEndAndAnswerAllowed:(char)arg1 ;
-(char)isHoldAndAnswerAllowed;
-(void)setHoldAndAnswerAllowed:(char)arg1 ;
-(char)isSendToVoicemailAllowed;
-(void)setSendToVoicemailAllowed:(char)arg1 ;
-(char)isAmbiguous;
-(id)initWithAllPropertiesAllowed;
-(void)handlePossibleStateChange;
-(char)updateInternalState;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
@end
