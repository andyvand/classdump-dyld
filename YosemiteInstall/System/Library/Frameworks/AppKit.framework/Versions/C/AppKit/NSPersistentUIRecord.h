/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSKeyedArchiverDelegate.h>

@class NSString, NSData, NSMutableDictionary, NSMutableSet, NSMutableArray, NSArray;

@interface NSPersistentUIRecord : NSObject <NSKeyedArchiverDelegate> {

	NSString* persistentID;
	NSData* archivedState;
	NSMutableDictionary* keyedState;
	NSMutableSet* urlsToStashInLS;
	NSMutableArray* securityScopedBookmarks;
	unsigned windowID;
	char isCarbonWindow;
	char isFromLSFileListEra;
	unsigned char encryptionKey[16];

}

@property (nonatomic,retain) NSData * archivedState; 
@property (nonatomic,retain) NSMutableSet * urlsToStashInLS; 
@property (readonly) NSString * persistentID; 
@property (readonly) NSArray * securityScopedBookmarks; 
@property (readonly) unsigned windowID; 
@property (assign) char isCarbonWindow; 
@property (readonly) char isFromLSFileListEra; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parseOneRecordFromReadBlock:(/*^block*/id)arg1 withDecryptionKeys:(id)arg2 ;
+(void)coalesceRecords:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(unsigned)windowID;
-(char)isGlobal;
-(NSMutableSet *)urlsToStashInLS;
-(void)setEncryptionKey:(unsigned char)arg1 ;
-(id)initForEncodingWithIdentifier:(id)arg1 windowID:(unsigned)arg2 ;
-(void)encodeKeyedState:(id)arg1 forKey:(id)arg2 type:(int)arg3 ;
-(void)setUrlsToStashInLS:(NSMutableSet *)arg1 ;
-(void)addSecurityScopedBookmarks:(id)arg1 ;
-(CFDataRef)copyData;
-(void)setIsCarbonWindow:(char)arg1 ;
-(void)generateArchive:(/*^block*/id)arg1 ;
-(char)isCarbonWindow;
-(NSString *)persistentID;
-(NSData *)archivedState;
-(id)keyedState;
-(NSArray *)securityScopedBookmarks;
-(id)copyStateDecoder;
-(char)keyPathStateForKey:(id)arg1 value:(id*)arg2 ;
-(id)openedPushStateUnarchivers;
-(id)copyRecordToNewWindowID:(unsigned)arg1 ;
-(char)isFromLSFileListEra;
-(void)mergeFromRecord:(id)arg1 ;
-(id)initForDecoding;
-(char)parsePayloadFromData:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeKeyedState:(id)arg1 forKey:(id)arg2 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(void)setArchivedState:(NSData *)arg1 ;
@end

