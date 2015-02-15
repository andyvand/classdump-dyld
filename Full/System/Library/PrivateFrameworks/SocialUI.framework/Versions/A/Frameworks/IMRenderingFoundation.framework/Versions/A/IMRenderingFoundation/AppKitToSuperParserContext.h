/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMRenderingFoundation/IMRenderingFoundation-Structs.h>
#import <IMFoundation/IMAttributedStringParserContext.h>

@class NSMutableAttributedString, NSColor, NSMutableArray, NSArray;

@interface AppKitToSuperParserContext : IMAttributedStringParserContext {

	NSMutableAttributedString* _superFormat;
	NSColor* _bodyBackgroundColor;
	NSColor* _bodyForegroundColor;
	long long _baseWritingDirection;
	char _didAddBodyAttributes;
	NSMutableArray* _mutableFileTransferGUIDs;

}

@property (readonly) NSArray * fileTransferGUIDs; 
@property (readonly) NSMutableArray * mutableFileTransferGUIDs;              //@synthesize mutableFileTransferGUIDs=_mutableFileTransferGUIDs - In the implementation block
-(NSMutableArray *)mutableFileTransferGUIDs;
-(id)_attributesForAttachmentWithAttributes:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 baseWritingDirection:(long long)arg2 bodyBackgroundColor:(id)arg3 bodyForegroundColor:(id)arg4 ;
-(id)resultsForLogging;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(id)superFormatString;
-(NSArray *)fileTransferGUIDs;
-(void)_preloadImage:(id)arg1 ;
-(id)name;
@end

