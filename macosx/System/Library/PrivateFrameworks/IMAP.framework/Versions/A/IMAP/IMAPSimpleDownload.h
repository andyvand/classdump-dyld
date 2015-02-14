/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPDownload.h>

@class NSMutableData, MCError, NSString;

@interface IMAPSimpleDownload : IMAPDownload {

	NSMutableData* _mdata;
	MCError* _error;
	unsigned _length : 32;
	char _knownLength;
	char _complete;
	unsigned _bytesFetched;
	NSString* _partSectionSpecifier;
	long long _textSectionSpecifier;

}

@property (retain) NSString * partSectionSpecifier;              //@synthesize partSectionSpecifier=_partSectionSpecifier - In the implementation block
@property (assign) long long textSectionSpecifier;               //@synthesize textSectionSpecifier=_textSectionSpecifier - In the implementation block
-(char)isComplete;
-(id)description;
-(id)data;
-(id)error;
-(void)setError:(id)arg1 ;
-(id)initWithUid:(unsigned)arg1 ;
-(id)createCopy;
-(NSString *)partSectionSpecifier;
-(long long)textSectionSpecifier;
-(unsigned)expectedLength;
-(unsigned)bytesFetched;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(void)setPartSectionSpecifier:(NSString *)arg1 ;
-(void)setTextSectionSpecifier:(long long)arg1 ;
-(id)initWithUid:(unsigned)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 length:(unsigned)arg4 ;
-(id)initWithUid:(unsigned)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 estimatedLength:(unsigned)arg4 ;
@end

