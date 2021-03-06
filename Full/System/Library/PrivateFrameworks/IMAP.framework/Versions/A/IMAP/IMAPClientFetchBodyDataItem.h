/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/IMAPClientFetchDataItem.h>

@class NSString;

@interface IMAPClientFetchBodyDataItem : IMAPClientFetchDataItem {

	long long _textSectionSpecifier;
	NSString* _partSectionSpecifier;
	NSRange _dataRange;

}

@property (readonly) NSRange dataRange;                                 //@synthesize dataRange=_dataRange - In the implementation block
@property (readonly) long long textSectionSpecifier;                    //@synthesize textSectionSpecifier=_textSectionSpecifier - In the implementation block
@property (copy,readonly) NSString * partSectionSpecifier;              //@synthesize partSectionSpecifier=_partSectionSpecifier - In the implementation block
+(id)newSectionSpecifierFromPart:(id)arg1 text:(long long)arg2 ;
-(id)init;
-(NSString *)partSectionSpecifier;
-(long long)textSectionSpecifier;
-(void)_finalizeCommandStringWithHeaderFieldNames:(id)arg1 peek:(char)arg2 ;
-(id)initWithPartSectionSpecifier:(id)arg1 textSectionSpecifier:(long long)arg2 peek:(char)arg3 headerFieldNames:(id)arg4 dataRange:(NSRange)arg5 ;
-(NSRange)dataRange;
-(id)initWithPartSectionSpecifier:(id)arg1 textSectionSpecifier:(long long)arg2 dataRange:(NSRange)arg3 ;
-(id)initWithHeaderFieldNames:(id)arg1 ;
-(char)isHeader;
@end

