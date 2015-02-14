/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/Versions/A/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMFoundation/IMAttributedStringParserContext.h>

@class NSMutableAttributedString, NSColor, NSMutableArray, NSArray;

@interface IMDHistoryAppKitToSuperParserContext : IMAttributedStringParserContext {

	NSMutableAttributedString* _superFormat;
	NSColor* _bodyBackgroundColor;
	NSColor* _bodyForegroundColor;
	long long _baseWritingDirection;
	char _didAddBodyAttributes;
	NSMutableArray* _mutableFileTransferGUIDs;
	NSMutableArray* _attachmentDicts;

}

@property (readonly) NSArray * fileTransferGUIDs; 
@property (retain) NSMutableArray * attachmentDicts;                         //@synthesize attachmentDicts=_attachmentDicts - In the implementation block
@property (readonly) NSMutableArray * mutableFileTransferGUIDs;              //@synthesize mutableFileTransferGUIDs=_mutableFileTransferGUIDs - In the implementation block
-(NSMutableArray *)mutableFileTransferGUIDs;
-(id)_attributesForAttachmentWithAttributes:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 baseWritingDirection:(long long)arg2 bodyBackgroundColor:(id)arg3 bodyForegroundColor:(id)arg4 ;
-(id)resultsForLogging;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(id)superFormatString;
-(NSArray *)fileTransferGUIDs;
-(NSMutableArray *)attachmentDicts;
-(void)setAttachmentDicts:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)name;
@end

