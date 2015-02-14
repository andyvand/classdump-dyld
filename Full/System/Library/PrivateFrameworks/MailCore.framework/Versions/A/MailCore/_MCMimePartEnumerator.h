/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class MCMimePart;

@interface _MCMimePartEnumerator : NSEnumerator {

	char _onlyAttachments;
	char _isFirstIteration;
	MCMimePart* _currentPart;

}

@property (assign,nonatomic) char onlyAttachments;                  //@synthesize onlyAttachments=_onlyAttachments - In the implementation block
@property (assign,nonatomic) char isFirstIteration;                 //@synthesize isFirstIteration=_isFirstIteration - In the implementation block
@property (nonatomic,retain) MCMimePart * currentPart;              //@synthesize currentPart=_currentPart - In the implementation block
-(id)initWithMimeBody:(id)arg1 onlyAttachments:(char)arg2 ;
-(MCMimePart *)currentPart;
-(char)onlyAttachments;
-(char)isFirstIteration;
-(void)setIsFirstIteration:(char)arg1 ;
-(void)setCurrentPart:(MCMimePart *)arg1 ;
-(void)setOnlyAttachments:(char)arg1 ;
-(id)nextObject;
@end

