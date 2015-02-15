/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMRenderingFoundation/AppKitToSuperParserContext.h>

@class IMHandle, NSMutableArray;

@interface InputLineToSuperParserContext : AppKitToSuperParserContext {

	IMHandle* _handle;
	NSMutableArray* _localURLsToArchiveAndSend;
	char _finished;

}
-(id)_attributesForAttachmentWithAttributes:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 baseWritingDirection:(long long)arg2 bodyBackgroundColor:(id)arg3 bodyForegroundColor:(id)arg4 handle:(id)arg5 finished:(char)arg6 ;
-(id)localURLsToArchiveAndSend;
@end

