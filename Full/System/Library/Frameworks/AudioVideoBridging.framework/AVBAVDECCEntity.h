/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
@class NSDictionary, NSMutableArray, AVB17221AEMEntity, AVBInterface, AVB17221Entity, AVBAVDECCController;

@interface AVBAVDECCEntity : NSObject {

	dispatch_queue_sRef _controllerQueue;
	NSDictionary* _controllerMappings;
	dispatch_queue_sRef _aecpQueue;
	dispatch_semaphore_sRef _aecpLimiter;
	dispatch_queue_sRef _acquireQueue;
	int _acquireCount;
	char activated;
	char acquired;
	char connected;
	NSMutableArray* interfaces;
	AVB17221AEMEntity* remoteModel;
	AVB17221AEMEntity* localModel;
	AVBInterface* activeInterface;
	AVB17221Entity* activeEntity;
	AVBAVDECCController* entityController;

}

@property (retain) NSMutableArray * interfaces; 
@property (retain) AVB17221AEMEntity * remoteModel; 
@property (retain) AVB17221AEMEntity * localModel; 
@property (assign) AVBInterface * activeInterface; 
@property (assign) AVB17221Entity * activeEntity; 
@property (assign,getter=isActivated,nonatomic) char activated; 
@property (assign) AVBAVDECCController * entityController; 
@property (assign,getter=isAcquired,nonatomic) char acquired; 
@property (assign,getter=isConnected,nonatomic) char connected; 
@property (nonatomic,readonly) dispatch_queue_sRef controllerQueue; 
@property (getter=isDirectlyConnected,nonatomic,readonly) char directlyConnected; 
-(char)acquire;
-(char)relinquish;
-(char)connectAllStreams;
-(char)disconnectAllStreams;
-(char)activateEntity;
-(char)deactivateEntity;
-(AVB17221AEMEntity *)remoteModel;
-(AVB17221Entity *)activeEntity;
-(void)enumerateIfNecessary;
-(AVBInterface *)activeInterface;
-(char)makeFirstInterfaceActive;
-(char)makeNextInterfaceActive;
-(char)addEntity:(id)arg1 andInterface:(id)arg2 ;
-(id)initWithEntity:(id)arg1 andInterface:(id)arg2 ;
-(void)setEntityController:(AVBAVDECCController *)arg1 ;
-(void)removeInterface:(id)arg1 ;
-(AVB17221AEMEntity *)localModel;
-(id)remoteObjectsForLocalObject:(id)arg1 ;
-(id)localObjectsForRemoteObject:(id)arg1 ;
-(char)setLocalObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)setRemoteObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(dispatch_queue_sRef)controllerQueue;
-(char)stopLocalInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)stopRemoteInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)stopLocalOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)stopRemoteOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)setRemoteAudioUnitWithIndex:(unsigned short)arg1 toSamplingRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalAudioUnitWithIndex:(unsigned short)arg1 toSamplingRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalInputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteInputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalOutputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteOutputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)startLocalOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)startRemoteOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)startLocalInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)startRemoteInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)setRemoteClockDomainWithIndex:(unsigned short)arg1 toRemoteClockSourceWithIndex:(unsigned short)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalClockDomainWithIndex:(unsigned short)arg1 toLocalClockSourceWithIndex:(unsigned short)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setInterfaces:(NSMutableArray *)arg1 ;
-(void)setActiveInterface:(AVBInterface *)arg1 ;
-(void)setActiveEntity:(AVB17221Entity *)arg1 ;
-(AVBAVDECCController *)entityController;
-(void)setRemoteModel:(AVB17221AEMEntity *)arg1 ;
-(void)enumerate;
-(void)setLocalModel:(AVB17221AEMEntity *)arg1 ;
-(void)setAcquired:(char)arg1 ;
-(char)sendAECPMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)_connectStreamWithLocalInputIndex:(unsigned short)arg1 andRemoteOutputIndex:(unsigned short)arg2 streamingWait:(char)arg3 classB:(char)arg4 ;
-(char)_connectLocalInputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)_connectRemoteOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)_connectStreamWithRemoteInputIndex:(unsigned short)arg1 andLocalOutputIndex:(unsigned short)arg2 streamingWait:(char)arg3 classB:(char)arg4 ;
-(char)_connectRemoteInputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)_connectLocalOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)_disconnectStreamWithLocalInputIndex:(unsigned short)arg1 andRemoteOutputIndex:(unsigned short)arg2 ;
-(char)_disconnectLocalInputStreamWithIndex:(unsigned short)arg1 ;
-(char)_disconnectRemoteOutputStreamWithIndex:(unsigned short)arg1 ;
-(char)_disconnectStreamWithRemoteInputIndex:(unsigned short)arg1 andLocalOutputIndex:(unsigned short)arg2 ;
-(char)_disconnectRemoteInputStreamWithIndex:(unsigned short)arg1 ;
-(char)_disconnectLocalOutputStreamWithIndex:(unsigned short)arg1 ;
-(void)addressAccessReadAtAddress:(unsigned long long)arg1 ofLength:(unsigned long long)arg2 appendToData:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(char)makeInterfaceActive:(id)arg1 ;
-(void)createLocalModel;
-(char)connectLocalInputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)connectRemoteOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)connectRemoteInputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)connectLocalOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)disconnectLocalInputStreamWithIndex:(unsigned short)arg1 ;
-(char)disconnectRemoteOutputStreamWithIndex:(unsigned short)arg1 ;
-(char)disconnectRemoteInputStreamWithIndex:(unsigned short)arg1 ;
-(char)disconnectLocalOutputStreamWithIndex:(unsigned short)arg1 ;
-(char)setLocalVideoClusterWithIndex:(unsigned short)arg1 toFormatSpecific:(id)arg2 aspectRatio:(id)arg3 videoSize:(id)arg4 andColorSpace:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)setRemoteVideoClusterWithIndex:(unsigned short)arg1 toFormatSpecific:(id)arg2 aspectRatio:(id)arg3 videoSize:(id)arg4 andColorSpace:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)setLocalVideoClusterWithIndex:(unsigned short)arg1 toFrameRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteVideoClusterWithIndex:(unsigned short)arg1 toFrameRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalIdentifyWithIndex:(unsigned short)arg1 toEnabled:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteIdentifyWithIndex:(unsigned short)arg1 toEnabled:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)readMemoryObject:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(char)isDirectlyConnected;
-(void)setActivated:(char)arg1 ;
-(char)isAcquired;
-(NSMutableArray *)interfaces;
-(void)setConnected:(char)arg1 ;
-(char)isActivated;
-(void)dealloc;
-(char)isConnected;
@end
