/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BookKit.framework/Versions/A/XPCServices/com.apple.BKAgentService.xpc/Contents/MacOS/com.apple.BKAgentService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.BKAgentService/NSXPCListenerDelegate.h>
#import <com.apple.BKAgentService/BKVolumeObserver.h>
#import <com.apple.BKAgentService/BKAgentService.h>

@protocol BKAgentService <NSObject>
@required
-(void)fetchBookLibraryTokens:(/*^block*/id)arg1;
-(void)fetchBooks:(/*^block*/id)arg1;
-(void)fetchImportingBooks:(/*^block*/id)arg1;
-(void)importBook:(id)arg1 withToken:(id)arg2 results:(/*^block*/id)arg3;
-(void)updateBook:(id)arg1 withToken:(id)arg2 withMetadata:(id)arg3 results:(/*^block*/id)arg4;
-(void)removeBook:(id)arg1 results:(/*^block*/id)arg2;
-(void)trashBook:(id)arg1 results:(/*^block*/id)arg2;
-(void)prioritizeImport:(id)arg1 results:(/*^block*/id)arg2;
-(void)migrateBook:(id)arg1 withToken:(id)arg2 withMetadata:(id)arg3 results:(/*^block*/id)arg4;
-(void)uncompressBook:(id)arg1 results:(/*^block*/id)arg2;
-(void)examineBook:(id)arg1 withToken:(id)arg2 results:(/*^block*/id)arg3;
-(void)redactBook:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchRedactedBooks:(/*^block*/id)arg1;
-(void)removeRedactedBook:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)applyPendingUpdates:(id)arg1 results:(/*^block*/id)arg2;
-(void)rebuildLibrary:(/*^block*/id)arg1;
-(void)reconnectToLibrary:(/*^block*/id)arg1;
-(void)moveLibrary:(id)arg1 withToken:(id)arg2 results:(/*^block*/id)arg3;
-(void)chooseLibrary:(id)arg1 withToken:(id)arg2 results:(/*^block*/id)arg3;
-(void)shutdownService:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSData, NSURL, NSXPCInterface, NSPointerArray, NSMutableArray, NSMutableDictionary, NSObject, BKAgentServiceImportQueue;

@interface BKAgentService : NSObject <NSXPCListenerDelegate, BKVolumeObserver, BKAgentService> {

	char _shuttingDown;
	short _bookLibraryVolume;
	NSString* _bookLibraryPath;
	NSData* _bookLibraryBookmark;
	NSURL* _bookLibraryURL;
	NSString* _booksPath;
	NSString* _downloadsPath;
	NSString* _temporaryPath;
	NSString* _updatesPath;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteInterface;
	NSPointerArray* _connections;
	NSMutableArray* _contentLibrary;
	NSMutableArray* _redactedLibrary;
	NSMutableDictionary* _importingLibrary;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_source> _cacheUpdateTimer;
	unsigned long long _cacheUpdateDeadline;
	unsigned long long _transactionCount;
	unsigned long long _libraryVersion;
	BKAgentServiceImportQueue* _importQueue;
	NSMutableDictionary* _importCancelHandlers;

}

@property (readonly) char bookLibraryOnline; 
@property (nonatomic,retain) NSString * bookLibraryPath;                                   //@synthesize bookLibraryPath=_bookLibraryPath - In the implementation block
@property (nonatomic,retain) NSData * bookLibraryBookmark;                                 //@synthesize bookLibraryBookmark=_bookLibraryBookmark - In the implementation block
@property (nonatomic,retain) NSURL * bookLibraryURL;                                       //@synthesize bookLibraryURL=_bookLibraryURL - In the implementation block
@property (assign,nonatomic) short bookLibraryVolume;                                      //@synthesize bookLibraryVolume=_bookLibraryVolume - In the implementation block
@property (nonatomic,retain) NSString * booksPath;                                         //@synthesize booksPath=_booksPath - In the implementation block
@property (nonatomic,retain) NSString * downloadsPath;                                     //@synthesize downloadsPath=_downloadsPath - In the implementation block
@property (nonatomic,retain) NSString * temporaryPath;                                     //@synthesize temporaryPath=_temporaryPath - In the implementation block
@property (nonatomic,retain) NSString * updatesPath;                                       //@synthesize updatesPath=_updatesPath - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                           //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteInterface;                             //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (nonatomic,retain) NSPointerArray * connections;                                 //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentLibrary;                              //@synthesize contentLibrary=_contentLibrary - In the implementation block
@property (nonatomic,retain) NSMutableArray * redactedLibrary;                             //@synthesize redactedLibrary=_redactedLibrary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * importingLibrary;                       //@synthesize importingLibrary=_importingLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ioQueue;                         //@synthesize ioQueue=_ioQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> cacheUpdateTimer;               //@synthesize cacheUpdateTimer=_cacheUpdateTimer - In the implementation block
@property (assign,nonatomic) unsigned long long cacheUpdateDeadline;                       //@synthesize cacheUpdateDeadline=_cacheUpdateDeadline - In the implementation block
@property (readonly) char cacheDirty; 
@property (assign,nonatomic) unsigned long long transactionCount;                          //@synthesize transactionCount=_transactionCount - In the implementation block
@property (assign,nonatomic) char shuttingDown;                                            //@synthesize shuttingDown=_shuttingDown - In the implementation block
@property (assign,nonatomic) unsigned long long libraryVersion;                            //@synthesize libraryVersion=_libraryVersion - In the implementation block
@property (nonatomic,retain) BKAgentServiceImportQueue * importQueue;                      //@synthesize importQueue=_importQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * importCancelHandlers;                   //@synthesize importCancelHandlers=_importCancelHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_connectionIsBookstoreAgent:(id)arg1 ;
+(char)_connectionIsStoreAssetD:(id)arg1 ;
+(void)initialize;
-(void)fetchBookLibraryTokens:(/*^block*/id)arg1 ;
-(void)fetchBooks:(/*^block*/id)arg1 ;
-(void)fetchImportingBooks:(/*^block*/id)arg1 ;
-(void)importBook:(id)arg1 withToken:(id)arg2 results:(/*^block*/id)arg3 ;
-(void)updateBook:(id)arg1 withToken:(id)arg2 withMetadata:(id)arg3 results:(/*^block*/id)arg4 ;
-(void)removeBook:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)trashBook:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)prioritizeImport:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)migrateBook:(id)arg1 withToken:(id)arg2 withMetadata:(id)arg3 results:(/*^block*/id)arg4 ;
-(void)uncompressBook:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)examineBook:(id)arg1 withToken:(id)arg2 results:(/*^block*/id)arg3 ;
-(void)redactBook:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchRedactedBooks:(/*^block*/id)arg1 ;
-(void)removeRedactedBook:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)applyPendingUpdates:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)rebuildLibrary:(/*^block*/id)arg1 ;
-(void)reconnectToLibrary:(/*^block*/id)arg1 ;
-(void)moveLibrary:(id)arg1 withToken:(id)arg2 results:(/*^block*/id)arg3 ;
-(void)chooseLibrary:(id)arg1 withToken:(id)arg2 results:(/*^block*/id)arg3 ;
-(void)shutdownService:(/*^block*/id)arg1 ;
-(unsigned long long)libraryVersion;
-(char)_setupBookLibrary:(id*)arg1 ;
-(char)cacheDirty;
-(void)_writeBooksPropertyList;
-(void)_bookLibraryUpdated;
-(id)p_errorWithCode:(unsigned long long)arg1 string:(id)arg2 ;
-(char)_createDirectoryStructureAtPath:(id)arg1 setupError:(id*)arg2 ;
-(id)_readBooksPropertyList:(id*)arg1 ;
-(void)_fixOrphanedFiles;
-(void)_cacheBooksPropertyList;
-(char)_reloadBookLibrary:(id*)arg1 ;
-(void)_backupMetadataIfNecessaryAtBookPath:(id)arg1 ;
-(id)_itunesMetadataFromPath:(id)arg1 ;
-(void)_bookMetadata:(id)arg1 changed:(long long)arg2 notifyBookstoreAgent:(char)arg3 ;
-(void)_persistMetadata:(id)arg1 ;
-(id)_bookLibraryTokens;
-(void)_bookMetadata:(id)arg1 changed:(long long)arg2 ;
-(id)_readBookMetadata:(id)arg1 ofType:(long long)arg2 withManager:(id)arg3 includeCover:(char)arg4 error:(id*)arg5 ;
-(char)bookLibraryOnline;
-(void)_transactionEnd;
-(void)_cancelUpdateTimer;
-(void)_transactionBegin;
-(void)_fetchAuthroizedBooks:(/*^block*/id)arg1 ;
-(char)_statusIndicatesFamilyPurchaseDeauthorization:(int)arg1 ;
-(id)_validateBook:(id)arg1 fairplayContextID:(unsigned)arg2 ;
-(id)_familyIDTupleForBook:(id)arg1 ;
-(char)_bookIsAuthorizedToAdd:(id)arg1 familyIDTuple:(id)arg2 fairplayContextID:(unsigned)arg3 ;
-(void)_setImportCancelHandler:(/*^block*/id)arg1 forAssetID:(id)arg2 ;
-(unsigned long long)_matchingBook:(id)arg1 inLibrary:(id)arg2 ;
-(void)_finalizeImportingBook:(id)arg1 ;
-(id)_importBook:(id)arg1 bookMetadata:(id)arg2 ofType:(long long)arg3 isUpdate:(char)arg4 withManager:(id)arg5 error:(out id*)arg6 ;
-(id)_normalizeValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)_matchingBook:(id)arg1 inLibrary:(id)arg2 withKey:(id)arg3 ;
-(id)_keyToMatchForBook:(id)arg1 allowedKeys:(id)arg2 ;
-(void)_examineBook:(id)arg1 withToken:(id)arg2 includeCoverData:(char)arg3 results:(/*^block*/id)arg4 ;
-(char)_renameExistingPDF:(id)arg1 withUpdatedMetadata:(id)arg2 renamedPath:(id*)arg3 error:(id*)arg4 ;
-(/*^block*/id)_importCancelHandlerForAssetID:(id)arg1 ;
-(void)volumeDidUnmount:(short)arg1 ;
-(void)volumeRenamed:(short)arg1 ;
-(NSString *)bookLibraryPath;
-(void)setBookLibraryPath:(NSString *)arg1 ;
-(NSData *)bookLibraryBookmark;
-(void)setBookLibraryBookmark:(NSData *)arg1 ;
-(NSURL *)bookLibraryURL;
-(void)setBookLibraryURL:(NSURL *)arg1 ;
-(short)bookLibraryVolume;
-(void)setBookLibraryVolume:(short)arg1 ;
-(NSString *)booksPath;
-(void)setBooksPath:(NSString *)arg1 ;
-(NSString *)downloadsPath;
-(void)setDownloadsPath:(NSString *)arg1 ;
-(NSString *)temporaryPath;
-(void)setTemporaryPath:(NSString *)arg1 ;
-(NSString *)updatesPath;
-(void)setUpdatesPath:(NSString *)arg1 ;
-(void)setRemoteInterface:(NSXPCInterface *)arg1 ;
-(NSMutableArray *)contentLibrary;
-(void)setContentLibrary:(NSMutableArray *)arg1 ;
-(NSMutableArray *)redactedLibrary;
-(void)setRedactedLibrary:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)importingLibrary;
-(void)setImportingLibrary:(NSMutableDictionary *)arg1 ;
-(void)setSerializationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)ioQueue;
-(void)setIoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)cacheUpdateTimer;
-(void)setCacheUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)cacheUpdateDeadline;
-(void)setCacheUpdateDeadline:(unsigned long long)arg1 ;
-(unsigned long long)transactionCount;
-(void)setTransactionCount:(unsigned long long)arg1 ;
-(char)shuttingDown;
-(void)setShuttingDown:(char)arg1 ;
-(void)setLibraryVersion:(unsigned long long)arg1 ;
-(void)setImportQueue:(BKAgentServiceImportQueue *)arg1 ;
-(NSMutableDictionary *)importCancelHandlers;
-(void)setImportCancelHandlers:(NSMutableDictionary *)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)volumeDidMount:(short)arg1 ;
-(void)volumeWillUnmount:(short)arg1 ;
-(NSXPCInterface *)remoteInterface;
-(BKAgentServiceImportQueue *)importQueue;
-(NSObject*<OS_dispatch_queue>)serializationQueue;
-(id)init;
-(NSPointerArray *)connections;
-(void)setConnections:(NSPointerArray *)arg1 ;
-(NSXPCInterface *)exportedInterface;
@end
