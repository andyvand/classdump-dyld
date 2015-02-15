/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDS-Structs.h>
#import <IDS/IDSDaemonListenerProtocol.h>

@class _IDSCompletionHandler, NSSet, NSString;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol> {

	_IDSCompletionHandler* _deleteCompletion;
	_IDSCompletionHandler* _localCompletion;
	_IDSCompletionHandler* _pairedCompletion;
	_IDSCompletionHandler* _deliveryStatsCompletion;
	NSSet* _allowedTrafficClassifiers;

}

@property (nonatomic,retain) NSSet * allowedTrafficClassifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)deletePairedDevice:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 queue:(dispatch_queue_sRef)arg3 ;
-(void)getPairedDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)getDeliveryStatsWithCompletionBlock:(/*^block*/id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)setAllowedTrafficClassifiers:(NSSet *)arg1 ;
-(NSSet *)allowedTrafficClassifiers;
-(void)setPairedDeviceInfo:(id)arg1 ;
-(void)localDeviceInfo:(id)arg1 ;
-(void)pairedDeviceInfo:(id)arg1 ;
-(void)deliveryStats:(id)arg1 ;
-(void)device:(id)arg1 pairingDeleted:(char)arg2 ;
-(void)device:(id)arg1 pairingAdded:(char)arg2 ;
-(void)getLocalDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(id)init;
-(void)dealloc;
@end

