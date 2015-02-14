/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSRequestOperation.h>

@class EWSReplyBodyType, EWSDuration, EWSEmailAddress;

@interface MFEWSSetUserOofSettingsRequestOperation : MFEWSRequestOperation {

	long long _oofState;
	EWSReplyBodyType* _internalReply;
	EWSReplyBodyType* _externalReply;
	EWSDuration* _duration;
	EWSEmailAddress* _emailAddress;
	long long _externalAudienceType;

}

@property (nonatomic,readonly) long long oofState;                            //@synthesize oofState=_oofState - In the implementation block
@property (nonatomic,readonly) EWSReplyBodyType * internalReply;              //@synthesize internalReply=_internalReply - In the implementation block
@property (nonatomic,readonly) EWSReplyBodyType * externalReply;              //@synthesize externalReply=_externalReply - In the implementation block
@property (nonatomic,readonly) EWSDuration * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) EWSEmailAddress * emailAddress;                //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) long long externalAudienceType;                //@synthesize externalAudienceType=_externalAudienceType - In the implementation block
+(Class)classForResponse;
-(long long)externalAudienceType;
-(id)initWithGateway:(id)arg1 errorHandler:(id)arg2 ;
-(id)prepareRequest;
-(id)initWithEmailAddress:(id)arg1 oofState:(long long)arg2 internalReply:(id)arg3 externalReply:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 externalAudienceType:(long long)arg7 gateway:(id)arg8 errorHandler:(id)arg9 ;
-(long long)oofState;
-(EWSReplyBodyType *)internalReply;
-(EWSReplyBodyType *)externalReply;
-(EWSDuration *)duration;
-(EWSEmailAddress *)emailAddress;
@end

