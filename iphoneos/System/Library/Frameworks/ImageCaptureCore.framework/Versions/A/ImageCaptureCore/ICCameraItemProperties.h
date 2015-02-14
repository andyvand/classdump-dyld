/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICCameraDevice, ICCameraFolder, NSNumber, NSString, NSMutableDictionary;

@interface ICCameraItemProperties : NSObject {

	ICCameraDevice* _device;
	ICCameraFolder* _parentFolder;
	NSNumber* _objectID;
	NSString* _name;
	NSString* _UTI;
	char _locked;
	char _inTemporaryStore;
	NSMutableDictionary* _userData;
	unsigned _ptpObjectHandle;
	char _addedAfterContentCatalogCompleted;
	int _lockItemAttributes;
	id _userObject;

}

@property (assign) ICCameraDevice * device;                                                                  //@synthesize device=_device - In the implementation block
@property (assign) ICCameraFolder * parentFolder;                                                            //@synthesize parentFolder=_parentFolder - In the implementation block
@property (retain) NSNumber * objectID;                                                                      //@synthesize objectID=_objectID - In the implementation block
@property (retain) NSString * name;                                                                          //@synthesize name=_name - In the implementation block
@property (assign) NSString * UTI;                                                                           //@synthesize UTI=_UTI - In the implementation block
@property (getter=isLocked) char locked;                                                                     //@synthesize locked=_locked - In the implementation block
@property (getter=isInTemporaryStore) char inTemporaryStore;                                                 //@synthesize inTemporaryStore=_inTemporaryStore - In the implementation block
@property (retain) NSMutableDictionary * userData;                                                           //@synthesize userData=_userData - In the implementation block
@property (assign) unsigned ptpObjectHandle;                                                                 //@synthesize ptpObjectHandle=_ptpObjectHandle - In the implementation block
@property (getter=wasAddedAfterContentCatalogCompleted) char addedAfterContentCatalogCompleted;              //@synthesize addedAfterContentCatalogCompleted=_addedAfterContentCatalogCompleted - In the implementation block
@property (retain) id userObject;                                                                            //@synthesize userObject=_userObject - In the implementation block
-(id)userObject;
-(void)setUserObject:(id)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(void)setParentFolder:(ICCameraFolder *)arg1 ;
-(void)lockItemAttributes;
-(void)unlockItemAttributes;
-(ICCameraFolder *)parentFolder;
-(void)setInTemporaryStore:(char)arg1 ;
-(unsigned)ptpObjectHandle;
-(void)setPtpObjectHandle:(unsigned)arg1 ;
-(char)wasAddedAfterContentCatalogCompleted;
-(void)setAddedAfterContentCatalogCompleted:(char)arg1 ;
-(NSString *)UTI;
-(char)isInTemporaryStore;
-(void)finalize;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableDictionary *)userData;
-(NSNumber *)objectID;
-(char)isLocked;
-(void)setLocked:(char)arg1 ;
-(ICCameraDevice *)device;
-(void)setObjectID:(NSNumber *)arg1 ;
-(void)setDevice:(ICCameraDevice *)arg1 ;
-(void)setUserData:(NSMutableDictionary *)arg1 ;
@end

