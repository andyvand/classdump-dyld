/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MKLocationRecorder.h>

@class MNTrace, NSDate, MNMotionContext;

@interface MNTraceRecorder : NSObject <MKLocationRecorder> {

	MNTrace* _trace;
	NSDate* _recordingStartTime;
	MNMotionContext* _motionContext;
	int _dbResult;
	BOOL _corrupted;
	BOOL _closed;
	BOOL _background;
	sqlite3_stmtRef _updateStartAndEnd;
	sqlite3_stmtRef _updateStart;
	sqlite3_stmtRef _updateEnd;
	sqlite3_stmtRef _updateActiveTransportType;
	sqlite3_stmtRef _locationInsert;
	sqlite3_stmtRef _locationErrorInsert;
	sqlite3_stmtRef _routeRequestInsert;
	sqlite3_stmtRef _routeResponseUpdate;
	sqlite3_stmtRef _routeResponseErrorInsert;
	sqlite3_stmtRef _routeSelectionInsert;
	sqlite3_stmtRef _routeSelectionUpdate;
	unsigned _routeRequestCount;
	unsigned _routeSelectionCount;
	/*^block*/ id _timeSinceRecordingBeganHandler;
	/*^block*/ id _errorHandler;

}

@property (nonatomic,retain) MNTrace * trace;                              //@synthesize trace=_trace - In the implementation block
@property (nonatomic,retain) NSDate * recordingStartTime;                  //@synthesize recordingStartTime=_recordingStartTime - In the implementation block
@property (nonatomic,retain) MNMotionContext * motionContext;              //@synthesize motionContext=_motionContext - In the implementation block
@property (nonatomic,copy) id timeSinceRecordingBeganHandler;              //@synthesize timeSinceRecordingBeganHandler=_timeSinceRecordingBeganHandler - In the implementation block
-(void)cancelTrace;
-(id)motionContext;
-(void)recordRouteDeselected;
-(void)recordRouteSelected:(id)arg1 ;
-(void)recordRouteRequest:(id)arg1 ;
-(id)initWithPath:(id)arg1 originData:(id)arg2 destinationData:(id)arg3 clMapMatching:(BOOL)arg4 errorHandler:(/*^block*/ id)arg5 ;
-(void)recordRouteResponse:(id)arg1 ;
-(void)updateOriginData:(id)arg1 ;
-(void)updateDestinationData:(id)arg1 ;
-(void)recordRouteError:(id)arg1 ;
-(void)_logSqliteErrorWithFile:(const char*)arg1 line:(int)arg2 ;
-(void)setRecordingStartTime:(id)arg1 ;
-(void)_addObserving;
-(void)_openNewTraceDBAtPath:(id)arg1 ;
-(void)_setOriginData:(id)arg1 destinationData:(id)arg2 ;
-(id)trace;
-(void)_dispatchWrite:(/*^block*/ id)arg1 ;
-(void)setTrace:(id)arg1 ;
-(void)setMotionContext:(id)arg1 ;
-(void)setTimeSinceRecordingBeganHandler:(/*^block*/ id)arg1 ;
-(void)_serializationError:(id)arg1 ;
-(void)_openDBAtPath:(id)arg1 ;
-(void)_initializeTraceDB;
-(void)_closeTraceDB;
-(void)_removeObserving;
-(void)saveTrace;
-(double)timeSinceRecordingBegan;
-(void)_recordLocationEvent:(int)arg1 coordinate:(SCD_Struct_Si10)arg2 rawCoordinate:(SCD_Struct_Si10)arg3 timestamp:(double)arg4 horizontalAccuracy:(double)arg5 verticalAccuracy:(double)arg6 altitude:(double)arg7 speed:(double)arg8 speedAccuracy:(double)arg9 course:(double)arg10 rawCourse:(double)arg11 type:(int)arg12 courseAccuracy:(double)arg13 correctedCoordinate:(SCD_Struct_Si10)arg14 correctedCourse:(double)arg15 matchType:(int)arg16 motionType:(int)arg17 motionConfidence:(int)arg18 motionExitType:(int)arg19 activeTransportType:(int)arg20 ;
-(void)_recordLocationEvent:(int)arg1 location:(id)arg2 correctedLocation:(id)arg3 ;
-(void)saveTraceSynchronously;
-(void)recordSimulatedCoordinate:(SCD_Struct_Si10)arg1 course:(double)arg2 altitude:(double)arg3 speed:(double)arg4 timestamp:(double)arg5 activeTransportType:(int)arg6 ;
-(void)resetLocationsForSimulation;
-(void)recordActiveTransportType:(int)arg1 timestamp:(double)arg2 ;
-(void)resetRouteSelections;
-(id)recordingStartTime;
-(/*^block*/ id)timeSinceRecordingBeganHandler;
-(void)beginTransaction;
-(void)endTransaction;
-(void)recordInitialCourse:(double)arg1 ;
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2 ;
-(void)recordError:(id)arg1 ;
-(void)recordLocationUpdatePause;
-(void)recordLocationUpdateResume;
-(void)dealloc;
-(void)_didEnterBackground:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)_prepareStatements;
@end
