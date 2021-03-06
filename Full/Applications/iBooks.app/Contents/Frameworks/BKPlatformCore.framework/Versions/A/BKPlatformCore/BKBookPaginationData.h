/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString;

@interface BKBookPaginationData : NSObject {

	NSURL* _bookURL;
	NSURL* _outputDirectoryURL;
	unsigned long long _numberOfPages;
	NSString* _userAgent;
	NSString* _bookName;
	NSURL* _bookOutputDirectoryURL;

}

@property (nonatomic,retain,readonly) NSURL * bookURL;                         //@synthesize bookURL=_bookURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * outputDirectoryURL;              //@synthesize outputDirectoryURL=_outputDirectoryURL - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPages;                 //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                               //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSString * bookName;                              //@synthesize bookName=_bookName - In the implementation block
@property (nonatomic,retain) NSURL * bookOutputDirectoryURL;                   //@synthesize bookOutputDirectoryURL=_bookOutputDirectoryURL - In the implementation block
-(NSURL *)bookURL;
-(char)p_createDirectoryIfNeeded:(id)arg1 error:(id*)arg2 ;
-(NSURL *)bookOutputDirectoryURL;
-(id)p_md5StringFromData:(id)arg1 ;
-(NSString *)bookName;
-(id)initWithBookURL:(id)arg1 outputDirectoryURL:(id)arg2 ;
-(char)setImageData:(id)arg1 forPage:(unsigned long long)arg2 ;
-(void)markAsComplete;
-(NSURL *)outputDirectoryURL;
-(void)setBookName:(NSString *)arg1 ;
-(void)setBookOutputDirectoryURL:(NSURL *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setNumberOfPages:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPages;
@end

