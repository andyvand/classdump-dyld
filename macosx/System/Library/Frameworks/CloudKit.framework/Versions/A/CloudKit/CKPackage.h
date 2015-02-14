/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/CKRecordValue.h>

@class NSArray, CKRecord, NSString, NSURL, CKSQLite, NSData;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue> {

	OpaquePCSShareProtectionRef _recordPCS;
	char _wasCached;
	char _open;
	char _transaction;
	char _ownsTheAnchor;
	NSArray* _assets;
	CKRecord* _record;
	NSString* _recordKey;
	NSURL* _fileURL;
	NSString* _applicationBundleID;
	NSString* _UUID;
	NSString* _anchorPath;
	CKSQLite* _sqlite;
	long long _packageID;
	unsigned long long _nextItemIndex;

}

@property (nonatomic,copy) NSData * signature; 
@property (nonatomic,copy) NSArray * assets;                                     //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic,__weak) CKRecord * record;                           //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * recordKey;                                 //@synthesize recordKey=_recordKey - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef recordPCS;              //@synthesize recordPCS=_recordPCS - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                     //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (assign,nonatomic) char wasCached;                                     //@synthesize wasCached=_wasCached - In the implementation block
@property (nonatomic,retain) NSString * UUID;                                    //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * anchorPath;                              //@synthesize anchorPath=_anchorPath - In the implementation block
@property (nonatomic,retain) CKSQLite * sqlite;                                  //@synthesize sqlite=_sqlite - In the implementation block
@property (assign,nonatomic) long long packageID;                                //@synthesize packageID=_packageID - In the implementation block
@property (assign,nonatomic) unsigned long long nextItemIndex;                   //@synthesize nextItemIndex=_nextItemIndex - In the implementation block
@property (assign,getter=isOpen,nonatomic) char open;                            //@synthesize open=_open - In the implementation block
@property (assign,getter=inTransaction,nonatomic) char transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) char ownsTheAnchor;                                 //@synthesize ownsTheAnchor=_ownsTheAnchor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_packagesPathForBundleID:(id)arg1 ;
+(void)destroyPackageAnchoredAtURL:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(char)wasCached;
-(void)setWasCached:(char)arg1 ;
-(NSString *)recordKey;
-(void)setRecord:(CKRecord *)arg1 ;
-(void)setRecordKey:(NSString *)arg1 ;
-(NSString *)anchorPath;
-(id)initWithArchivedAnchoredPackage:(id)arg1 ;
-(void)setAnchorPath:(NSString *)arg1 ;
-(NSString *)applicationBundleID;
-(id)_initWithPath:(id)arg1 UUID:(id)arg2 ;
-(id)_packageDatabasePathWithUUID:(id)arg1 ;
-(CKSQLite *)sqlite;
-(long long)packageID;
-(char)ownsTheAnchor;
-(void)setOwnsTheAnchor:(char)arg1 ;
-(void)_setReferenceCount:(long long)arg1 ;
-(char)isAnchorStillValid;
-(void)setSqlite:(CKSQLite *)arg1 ;
-(void)incReferenceCount;
-(char)inTransaction;
-(char)decReferenceCount;
-(id)_itemWithColumnsByName:(id)arg1 ;
-(id)_itemOrNilAtIndex:(unsigned long long)arg1 ;
-(void)setTransaction:(char)arg1 ;
-(id)initWithAnchorURL:(id)arg1 ;
-(void)setRecordPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)itemEnumerator;
-(id)itemEnumeratorForSectionAtIndex:(unsigned long long)arg1 ;
-(void)updateItemAtIndex:(long long)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned long long)arg5 ;
-(void)updateItemAtIndex:(long long)arg1 withFileURL:(id)arg2 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)addSection:(id)arg1 ;
-(OpaquePCSShareProtectionRef)recordPCS;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)setPackageID:(long long)arg1 ;
-(unsigned long long)nextItemIndex;
-(void)setNextItemIndex:(unsigned long long)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSString *)UUID;
-(void)endTransaction;
-(void)destroy;
-(void)setOpen:(char)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)beginTransaction;
-(unsigned long long)sectionCount;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)close;
-(void)addItem:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSURL *)fileURL;
-(char)open;
-(char)isOpen;
-(id)replacementObjectForCoder:(id)arg1 ;
-(unsigned long long)itemCount;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(CKRecord *)record;
@end

