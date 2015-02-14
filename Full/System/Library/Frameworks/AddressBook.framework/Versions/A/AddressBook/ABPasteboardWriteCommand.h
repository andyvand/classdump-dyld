/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookCommand.h>

@protocol ABPasteboardData;
@class NSPasteboard;

@interface ABPasteboardWriteCommand : ABBookCommand {

	NSPasteboard* _pasteboard;
	id<ABPasteboardData> _pasteboardData;

}

@property (readonly) NSPasteboard * pasteboard;                        //@synthesize pasteboard=_pasteboard - In the implementation block
@property (readonly) id<ABPasteboardData> pasteboardData;              //@synthesize pasteboardData=_pasteboardData - In the implementation block
-(void)execute;
-(id)initWithPasteboard:(id)arg1 pasteboardData:(id)arg2 ;
-(NSPasteboard *)pasteboard;
-(id<ABPasteboardData>)pasteboardData;
-(void)dealloc;
@end

