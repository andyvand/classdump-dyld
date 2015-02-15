/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICCameraItem.h>

@class NSArray;

@interface ICCameraFolder : ICCameraItem {

	id _folderProperties;

}

@property (readonly) NSArray * contents; 
-(id)folders;
-(void)removeContent;
-(char)foundSidecarFilesToCompare;
-(void)setFoundSidecarFilesToCompare:(char)arg1 ;
-(id)initWithDictionary:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)addFolder:(id)arg1 ;
-(void)sendDidAddItemMessageToDelegateOfCameraDevice:(id)arg1 ;
-(id)getFolderWithID:(id)arg1 ;
-(id)filesSet;
-(id)getFileWithID:(id)arg1 ;
-(void)sendDidRemoveItemMessageToDelegateOfCameraDevice:(id)arg1 ;
-(void)deleteItem:(id)arg1 ;
-(void)addContent:(id)arg1 ;
-(void)deleteFile:(id)arg1 ;
-(void)deleteFolder:(id)arg1 ;
-(void)deleteFolderWithID:(id)arg1 ;
-(void)deleteFileWithID:(id)arg1 ;
-(id)files;
-(void)addFile:(id)arg1 ;
-(char)hasThumbnail;
-(id)metadataIfAvailable;
-(CGImageRef)thumbnailIfAvailable;
-(void)finalize;
-(void)dealloc;
-(NSArray *)contents;
-(id)description;
-(id)modificationDate;
-(id)creationDate;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

