/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSMutableSet, NSMutableArray;

@interface ICCameraFolderProperties : NSObject {

	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSMutableSet* _files;
	NSMutableArray* _folders;
	char _foundSidecarFilesToCompare;

}

@property (retain) NSDate * creationDate;                        //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * modificationDate;                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (retain) NSMutableSet * files;                         //@synthesize files=_files - In the implementation block
@property (retain) NSMutableArray * folders;                     //@synthesize folders=_folders - In the implementation block
@property (assign) char foundSidecarFilesToCompare;              //@synthesize foundSidecarFilesToCompare=_foundSidecarFilesToCompare - In the implementation block
-(NSMutableArray *)folders;
-(char)foundSidecarFilesToCompare;
-(void)setFoundSidecarFilesToCompare:(char)arg1 ;
-(NSMutableSet *)files;
-(void)setFiles:(NSMutableSet *)arg1 ;
-(void)finalize;
-(void)dealloc;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
@end

