/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/GFGraph.h>

@class QCPatchRenderingInfo, QCRenderState, QCRenderingManager, QCBooleanPort, QCNumberPort;

@interface QCPatch : GFGraph {

	QCPatchRenderingInfo* _renderingInfo;
	QCRenderState* _renderState;
	int _executionMode;
	QCRenderingManager* _renderingManager;
	QCPatchExecutionInfo* _executionInfo;
	unsigned long long _executionFlags;
	int _timebase;
	QCBooleanPort* _enableInput;
	QCNumberPort* _timeInput;
	char _enabled;
	unsigned long long _activeCount;
	void* _observationInfo;
	id _proExtension;
	double _unused31[2];
	unsigned long long _unused32[1];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(Class)_listClass;
+(Class)connectionClass;
+(Class)proxyPortClass;
+(Class)baseClass;
+(Class)nodeClassDescriptionClass;
+(char)shouldLoadAttributes;
+(id)_keyFromName:(id)arg1 ;
+(void)loadPlugInAtPath:(id)arg1 ;
+(char)canInstantiateWithFile:(id)arg1 ;
+(id)instantiateWithFile:(id)arg1 ;
+(id)serializedStateKeysWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(id)createPatchWithName:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(int)timeModeWithIdentifier:(id)arg1 ;
+(id)patchManager;
+(char)setShouldLoadAttributes:(char)arg1 ;
+(id)stateArrays;
+(id)validateResourceURL:(id)arg1 withOptions:(id)arg2 ;
+(char)supportsOptimizedExecutionForIdentifier:(id)arg1 ;
+(id)cachedStateArrays;
+(char)usesLocalContextForIdentifier:(id)arg1 ;
+(id)patchNames;
+(id)patchWithName:(id)arg1 ;
+(id)patchAttributesWithName:(id)arg1 ;
+(void)registerPatch:(id)arg1 withName:(id)arg2 ;
+(void)loadPlugInsInFolder:(id)arg1 ;
+(void)loadPlugInsInLibrary:(id)arg1 ;
+(id)_publicAttributesWithIdentifier:(id)arg1 ;
+(id)_privateAttributesWithIdentifier:(id)arg1 ;
+(char)getMatrixFrom:(id)arg1 toPatch:(id)arg2 matrix:(double*)arg3 ignoreWithin:(id)arg4 includeFromTransform:(BOOL)arg5 ;
-(void)finalize;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_cleanup;
-(void*)observationInfo;
-(void)suspendExecution;
-(id)selectedNodes;
-(char)_enabled;
-(void)setObservationInfo:(void*)arg1 ;
-(void)stateUpdated;
-(id)_baseKey;
-(void)deleteConnectionForKey:(id)arg1 ;
-(void)deleteProxyPortForKey:(id)arg1 ;
-(char)addNode:(id)arg1 forKey:(id)arg2 ;
-(id)createConnectionFromPort:(id)arg1 toPort:(id)arg2 forKey:(id)arg3 ;
-(id)createProxyPortWithOriginalPort:(id)arg1 forKey:(id)arg2 ;
-(void)removeNodeForKey:(id)arg1 ;
-(char)canAddNode:(id)arg1 ;
-(void)nodeDidAddToGraph:(id)arg1 ;
-(char)canCreateConnectionFromPort:(id)arg1 toPort:(id)arg2 ;
-(int)directionForPort:(id)arg1 ;
-(id)createInputPortWithArguments:(id)arg1 forKey:(id)arg2 ;
-(id)createOutputPortWithArguments:(id)arg1 forKey:(id)arg2 ;
-(void)deleteInputPortForKey:(id)arg1 ;
-(void)deleteOutputPortForKey:(id)arg1 ;
-(id)proxyPortForOriginalPort:(id)arg1 ;
-(id)customInputPorts;
-(id)customInputPorts;
-(void)_logMessage:(id)arg1 ;
-(void)setInputPortOrder:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)setOutputPortOrder:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)customOutputPorts;
-(id)customOutputPorts;
-(id)performanceCounters;
-(id)nodeActorForView:(id)arg1 ;
-(Class)graphViewClass;
-(void)enable:(id)arg1 ;
-(void)disable:(id)arg1 ;
-(char)render:(double)arg1 arguments:(id)arg2 ;
-(char)startRendering:(id)arg1 options:(id)arg2 ;
-(id)renderingContext;
-(void)setValue:(id)arg1 forStateKey:(id)arg2 ;
-(int)renderingFlags;
-(void)setRenderingFlags:(int)arg1 ;
-(char)isRendering;
-(char)isPausedRendering;
-(int)_executionMode;
-(void)stopRendering;
-(double)nextExecutionTime:(double)arg1 arguments:(id)arg2 ;
-(char)prerenderAtTime:(double)arg1 imageSizeHint:(CGSize)arg2 arguments:(id)arg3 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)setNeedsExecution;
-(void)deleteInputForKey:(id)arg1 ;
-(void)deleteOutputForKey:(id)arg1 ;
-(id)createInputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 ;
-(id)createOutputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)inSafeMode;
-(int)timebase;
-(double)_nextExecutionTime;
-(unsigned long long)_activeCount;
-(id)parentPatch;
-(void)__setValue:(id)arg1 forPortKey:(id)arg2 ;
-(void)_setIndex:(id)arg1 forPort:(id)arg2 ;
-(void)_setKey:(id)arg1 forPort:(id)arg2 ;
-(id)subpatches;
-(unsigned long long)orderForConsumerSubpatch:(id)arg1 ;
-(id)consumerSubpatches;
-(void)setOrder:(unsigned long long)arg1 forConsumerSubpatch:(id)arg2 ;
-(void)setTimebase:(int)arg1 ;
-(id)isPortPublished:(id)arg1 ;
-(void)unpublishPort:(id)arg1 ;
-(char)__isPatchInUse:(id)arg1 ;
-(void)resumeRendering;
-(void)pauseRendering;
-(id)createInputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 arguments:(id)arg4 order:(unsigned long long)arg5 ;
-(void)setInputOrder:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)createOutputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 arguments:(id)arg4 order:(unsigned long long)arg5 ;
-(void)setOutputOrder:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)inputs;
-(id)outputs;
-(char)canAddSubpatch:(id)arg1 ;
-(char)addSubpatch:(id)arg1 ;
-(void)removeSubpatch:(id)arg1 ;
-(id)subpatchForKey:(id)arg1 ;
-(id)keyForSubpatch:(id)arg1 ;
-(id)pathForSubpatch:(id)arg1 ;
-(id)subpatchForPath:(id)arg1 ;
-(char)canPublishPort:(id)arg1 ;
-(id)publishPort:(id)arg1 ;
-(void)_forwardRenderingFlag;
-(void)setForceInputsUpdate;
-(char)_execute:(double)arg1 arguments:(id)arg2 ;
-(id)findSubpatchesWithName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)updateTimebase:(int)arg1 ;
-(id)systemInputPorts;
-(id)systemOutputPorts;
-(void)applyFunctionOnSubpatches:(/*function pointer*/void*)arg1 context:(void*)arg2 recursive:(char)arg3 ;
-(id)_renderingInfo;
-(id)_renderState;
-(int)_executionFlags;
-(id)_enableInput;
-(void)_invalidateExecutionMode;
-(void)_invalidateTimeMode;
-(id)serializedValueForStateKey:(id)arg1 ;
-(void)setSerializedValue:(id)arg1 forStateKey:(id)arg2 ;
-(char)_setup:(id)arg1 state:(id)arg2 ;
-(void)_activate;
-(void)_deactivate;
-(char)isStateKey:(id)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
-(id)valueForStateKey:(id)arg1 ;
-(id)safeURLFromURL:(id)arg1 ;
-(char)_executeSubpatches:(double)arg1 arguments:(id)arg2 ;
-(id)dataWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)safeURLFromString:(id)arg1 ;
-(char)executeSubpatches:(double)arg1 arguments:(id)arg2 ;
-(char)debuggingMode;
-(char)shouldAbortExecution;
-(void)setCustomizedName:(id)arg1 ;
-(void)_drawDirtyRect;
-(char)beginLocalContext;
-(void)endLocalContext;
-(double)nextExecutionTimeForSubpatches:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)_invalidateDodForSubpatches;
-(void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3 ;
-(void)invalidateDodForSubpatches;
-(int)_checkExecutionMode;
-(void)_enable;
-(void)_disable;
-(void)_resetExecutionFlags;
-(void)_QCArrayResetSize:(id)arg1 newSize:(unsigned long long)arg2 ;
-(double)_nextExecutionTime:(double)arg1 arguments:(id)arg2 ;
-(char)_renderAtTime:(double)arg1 arguments:(id)arg2 ;
-(char)__execute:(double)arg1 arguments:(id)arg2 ;
-(void)_resetExecution;
-(char)boolForStateKey:(id)arg1 ;
-(void)setBool:(char)arg1 forStateKey:(id)arg2 ;
-(long long)integerForStateKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forStateKey:(id)arg2 ;
-(double)doubleForStateKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forStateKey:(id)arg2 ;
-(void)abortExecution;
-(void)resumeExecution;
-(char)isExecutionSuspended;
-(char)checkForGLError;
-(double*)getTransform;
-(char)patchSetsTransform;
-(void)setPatchSetsTransform:(char)arg1 ;
-(SCD_Struct_QC4)md5WithTime:(double)arg1 arguments:(id)arg2 ;
-(char)patchIsInMacro:(id)arg1 ;
-(unsigned long long)getNumberOfInputImagePorts;
-(id)getNthInputImagePort:(unsigned)arg1 ;
-(unsigned long long)getNumberOfInputPorts;
-(id)getNthInputPort:(unsigned)arg1 ;
-(char)getMatrix:(double*)arg1 ;
@end

