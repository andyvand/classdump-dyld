/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData, NSDictionary, NSArray;

@interface DownloadFile : NSObject {

	NSString* _initialDownloadPath;
	int _type;
	NSData* _bookmarkData;
	char _isAliasOrSymlink;
	char _isSubFile;
	char _isTrashed;
	NSDictionary* _securityAssessment;
	NSArray* _temporaryFiles;

}

@property (nonatomic,copy) NSData * bookmarkData;              //@synthesize bookmarkData=_bookmarkData - In the implementation block
+(id)filesForUnarchivedFileAtPath:(id)arg1 ;
-(void)setIsSubFile:(char)arg1 ;
-(id)_MIMETypeFromExtension;
-(char)_isMIMEType:(id)arg1 ;
-(void)_setInitialDownloadPath:(id)arg1 ;
-(void)setBookmarkData:(NSData *)arg1 ;
-(char)_isBOM;
-(char)_isGZIP;
-(char)_isXIP;
-(char)isSubFile;
-(char)isTrashed;
-(id)initWithBookmarkData:(id)arg1 pathString:(id)arg2 ;
-(id)aliasedOrOriginalPath;
-(char)isArchive;
-(char)isBOM;
-(char)isGZIP;
-(char)isXIP;
-(void)setTypeWithEncoding:(id)arg1 ;
-(void)setIsTrashed:(char)arg1 ;
-(char)isMovableOrRemovable;
-(id)securityAssessment;
-(NSData *)bookmarkData;
-(id)description;
-(id)path;
-(int)type;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(void)setType:(int)arg1 ;
@end

