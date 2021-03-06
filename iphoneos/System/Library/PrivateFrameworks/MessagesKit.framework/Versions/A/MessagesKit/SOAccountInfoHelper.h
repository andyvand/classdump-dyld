/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MessagesKit.framework/Versions/A/MessagesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessagesKit/SOHelper.h>
#import <MessagesKit/SOAccountInfoHelperReceiverProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface SOAccountInfoHelper : SOHelper <SOAccountInfoHelperReceiverProtocol> {

	NSMutableDictionary* _iMessageIDToChangeBlockGUIDs;
	NSMutableDictionary* _facetimeIDToChangeBlockGUIDs;
	NSMutableDictionary* _changeBlockGUIDToBlock;
	NSObject*<OS_dispatch_queue> _accountInfoDispatchQueue;

}

@property (nonatomic,retain) NSMutableDictionary * iMessageIDToChangeBlockGUIDs;                 //@synthesize iMessageIDToChangeBlockGUIDs=_iMessageIDToChangeBlockGUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * facetimeIDToChangeBlockGUIDs;                 //@synthesize facetimeIDToChangeBlockGUIDs=_facetimeIDToChangeBlockGUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeBlockGUIDToBlock;                       //@synthesize changeBlockGUIDToBlock=_changeBlockGUIDToBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accountInfoDispatchQueue;              //@synthesize accountInfoDispatchQueue=_accountInfoDispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)receiverProtocol;
+(id)remoteReceiverProtocol;
+(id)bundleName;
+(id)sharedInstance;
-(void)setValue:(id)arg1 forControllerKey:(id)arg2 ;
-(void)updatedFaceTimeStatusID:(id)arg1 ;
-(void)updatedMessagesStatusID:(id)arg1 ;
-(void)addInvalidFaceTimeID:(id)arg1 ;
-(void)addValidFaceTimeID:(id)arg1 ;
-(void)addInvalidMessagesID:(id)arg1 ;
-(void)addValidMessagesID:(id)arg1 ;
-(long long)bonjourAccountState;
-(long long)messagesAccountState;
-(long long)faceTimeAccountState;
-(long long)iMessageAccountState;
-(long long)_stateForKey:(id)arg1 ;
-(id)_validMessagesHandles;
-(id)_invalidMessagesHandles;
-(id)_validFTHandles;
-(id)_invalidFTHandles;
-(id)_generateGUID;
-(void)removeBlock:(id)arg1 ;
-(id)_runBlock:(/*^block*/id)arg1 onIDChange:(id)arg2 withStorage:(id)arg3 ;
-(long long)bonjourAccountStateBlocking;
-(long long)messagesAccountStateBlocking;
-(long long)faceTimeAccountStateBlocking;
-(long long)iMessageAccountStateBlocking;
-(char)iMessageAccountOnly;
-(long long)messagesAliasStateForID:(id)arg1 ;
-(long long)faceTimeAliasStateForID:(id)arg1 ;
-(id)runBlock:(/*^block*/id)arg1 onFaceTimeIDChange:(id)arg2 ;
-(id)runBlock:(/*^block*/id)arg1 onIMessageIDChange:(id)arg2 ;
-(id)faceTimeIDsForABPersonID:(id)arg1 ;
-(id)legacyVideoIDsForABPersonID:(id)arg1 ;
-(id)legacyAudioIDsForABPersonID:(id)arg1 ;
-(id)legacyScreenSharingIDsForABPersonID:(id)arg1 ;
-(NSMutableDictionary *)iMessageIDToChangeBlockGUIDs;
-(void)setIMessageIDToChangeBlockGUIDs:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)facetimeIDToChangeBlockGUIDs;
-(void)setFacetimeIDToChangeBlockGUIDs:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)changeBlockGUIDToBlock;
-(void)setChangeBlockGUIDToBlock:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)accountInfoDispatchQueue;
-(void)setAccountInfoDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)shouldShowStatus;
-(id)init;
@end

