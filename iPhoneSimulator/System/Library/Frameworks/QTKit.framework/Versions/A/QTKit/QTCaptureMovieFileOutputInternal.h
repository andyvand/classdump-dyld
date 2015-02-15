/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class NSMutableArray, QTMediaIOGraphUnitDescription, QTCaptureOperationDescriptorQueue, NSLock, QTCaptureFileOutputRecordingOperationDescriptor, NSError, NSMutableSet, NSSet, NSTimer, NSURL;

@interface QTCaptureMovieFileOutputInternal : NSObject {

	NSMutableArray* _connections;
	CFDictionaryRef _mixerUnits;
	CFDictionaryRef _decompressorUnits;
	CFDictionaryRef _videoFrameRateGovernorUnits;
	CFDictionaryRef _compressorUnits;
	QTMediaIOGraphUnitDescription* _fileWriterOutputUnit;
	unsigned _activeConnectionCount;
	QTCaptureOperationDescriptorQueue* operationDescriptorQueue;
	NSLock* operationDescriptorQueueLock;
	QTCaptureFileOutputRecordingOperationDescriptor* runningRecordingOperationDescriptor;
	int runningRecordingOperationDescriptorLock;
	SCD_Struct_QT36 syncTime;
	void* syncTimeConnection;
	int syncTimeLock;
	SCD_Struct_QT12 _timeWritten;
	unsigned long long _sizeWritten;
	int _statsLock;
	char wasForcedToPause;
	NSError* _stopError;
	int _stopErrorLock;
	NSMutableSet* activeConnections;
	NSSet* _noDataConnections;
	int connectionsLock;
	char _fileControlCallbackRanSinceLastCheck;
	char _fileControlCallbackTimedOut;
	int _fileControlCallbackTimeoutLock;
	NSTimer* _fileControlCallbackTimeoutTimer;
	NSURL* outputFileURL;
	char recordingPaused;
	int recordingStateLock;

}
@end

