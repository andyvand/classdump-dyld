/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFOfflineCacheReplayContextTransformation.h>

@class NSString;

@interface _MFTranslateTemporaryIDReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation> {

	NSString* _temporaryID;
	NSString* _translatedID;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)applyToReplayContext:(id)arg1 ;
-(id)initWithTemporaryID:(id)arg1 translatedID:(id)arg2 ;
@end
