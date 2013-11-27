/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraItem.h>

@class NSArray;

@interface ICCameraFolder : ICCameraItem {

	void* _folderProperties;
	int _filesLock;
	int _foldersLock;

}

@property (readonly) NSArray * contents; 
-(void)addFile:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)contents;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGImageRef)thumbnail;
-(id)folders;
-(void)deleteItem:(id)arg1 ;
-(void)addFolder:(id)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)lockFiles;
-(void)unlockFiles;
-(void)lockFolders;
-(void)unlockFolders;
-(void)deleteFile:(id)arg1 ;
-(void)deleteFolder:(id)arg1 ;
-(void)requestMetadata;
-(void)requestThumbnail;
-(id)metadata;
-(BOOL)hasThumbnail;
-(void)finalize;
-(id)files;
@end
