/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@interface SFSyncManager : NSObject {

	id _reserved_SFSyncManager;

}
+(id)pathForEmbeddedTool:(id)arg1 ;
+(id)sharedSyncManager;
+(id)defaultClientID;
-(id)_syncList;
-(void)_updateLogLevel;
-(void)initSyncList:(id)arg1 ;
-(int)runSyncToolWithArguments:(id)arg1 wait:(char)arg2 ;
-(int)makeLocalPath:(id)arg1 ;
-(int)runDotMacToolWithArguments:(id)arg1 wait:(char)arg2 ;
-(id)_keychainDictionaryOnDotMacForKeychain:(id)arg1 ;
-(char)_signaturesMatchForKeychain:(OpaqueSecKeychainRefRef)arg1 keychainLeafName:(id)arg2 ;
-(char)_keychainBlobExists:(OpaqueSecKeychainRefRef)arg1 inDictionary:(id)arg2 returnedBlob:(id*)arg3 ;
-(int)updateDictOnIDisk:(id)arg1 localFile:(id)arg2 dictToWrite:(id)arg3 ;
-(id)keychainSyncList;
-(void)saveSyncList;
-(id)keychainName:(OpaqueSecKeychainRefRef)arg1 ;
-(int)_recodeKeychainIfBlobDNE:(OpaqueSecKeychainRefRef)arg1 keychainLeafName:(id)arg2 didRecode:(char*)arg3 ;
-(int)createAndEnableDotMacKeychainForSyncing:(id)arg1 ;
-(int)prepareKeychainToSync:(OpaqueSecKeychainRefRef)arg1 ;
-(unsigned)syncStateForKeychain:(OpaqueSecKeychainRefRef)arg1 ;
-(int)runProcess:(id)arg1 arguments:(id)arg2 wait:(char)arg3 ;
-(int)resetKeychainSyncing;
-(char)_didPushKeychainBlobIfDNE:(OpaqueSecKeychainRefRef)arg1 keychainLeafName:(id)arg2 ;
-(void)_replaceStaleBlobs;
-(int)autoCreateKeychainsWithBlobsOnIDisk:(char*)arg1 ;
-(void)loginKeychainWasReset:(id)arg1 forKeychain:(OpaqueSecKeychainRefRef)arg2 syncState:(unsigned)arg3 ;
-(void)blobChanged:(id)arg1 forKeychain:(id)arg2 ;
-(void)setSyncState:(unsigned)arg1 keychain:(OpaqueSecKeychainRefRef)arg2 ;
-(char)syncingEnabled;
-(id)init;
-(void)dealloc;
@end
