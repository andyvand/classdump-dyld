/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class ICCameraDevice, ICCameraFolder, NSString, NSDate, NSDictionary, NSMutableDictionary, NSData;

@interface ICCameraItem : NSObject {

	id _itemProperties;

}

@property (readonly) ICCameraDevice * device; 
@property (readonly) ICCameraFolder * parentFolder; 
@property (readonly) NSString * name; 
@property (readonly) NSString * UTI; 
@property (readonly) NSString * fileSystemPath; 
@property (getter=isLocked,readonly) char locked; 
@property (getter=isRaw,readonly) char raw; 
@property (getter=isInTemporaryStore,readonly) char inTemporaryStore; 
@property (readonly) NSDate * creationDate; 
@property (readonly) NSDate * modificationDate; 
@property (readonly) CGImageRef thumbnailIfAvailable; 
@property (readonly) CGImageRef largeThumbnailIfAvailable; 
@property (readonly) NSDictionary * metadataIfAvailable; 
@property (readonly) NSMutableDictionary * userData; 
@property (readonly) unsigned ptpObjectHandle; 
@property (getter=wasAddedAfterContentCatalogCompleted,readonly) char addedAfterContentCatalogCompleted; 
@property (readonly) char hasThumbnail; 
@property (readonly) char hasMetadata; 
@property (readonly) NSData * thumbnailData; 
@property (retain) id userObject; 
-(void)invalidateImageVersion;
-(id)userObject;
-(void)setUserObject:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(char)hasMetadata;
-(void)setUTI:(NSString *)arg1 ;
-(NSData *)thumbnailData;
-(void)lockAndNULLParentFolder;
-(void)lockItemAttributes;
-(void)unlockItemAttributes;
-(ICCameraFolder *)parentFolder;
-(unsigned)ptpObjectHandle;
-(char)wasAddedAfterContentCatalogCompleted;
-(NSString *)fileSystemPath;
-(void)appendPath:(id)arg1 ;
-(char)hasThumbnail;
-(NSString *)UTI;
-(char)isRaw;
-(NSDictionary *)metadataIfAvailable;
-(char)isInTemporaryStore;
-(CGImageRef)largeThumbnailIfAvailable;
-(CGImageRef)thumbnailIfAvailable;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableDictionary *)userData;
-(id)objectID;
-(char)isLocked;
-(NSDate *)modificationDate;
-(ICCameraDevice *)device;
-(NSDate *)creationDate;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

