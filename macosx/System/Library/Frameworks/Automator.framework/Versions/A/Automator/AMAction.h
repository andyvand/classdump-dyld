/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Automator/Automator-Structs.h>
@class NSMutableDictionary, NSDictionary, NSString, NSImage;

@interface AMAction : NSObject {

	NSMutableDictionary* _definition;
	NSDictionary* _argumentsWithOutlets;
	NSString* _currentInput;
	NSString* _error;
	NSString* _output;
	id _currentRunner;
	AMAction* _loopParent;
	NSString* _actionDescription;
	NSImage* _icon;
	unsigned long long _relevance;
	char _showsRelevance;
	char _stopped;
	id _future;
	id _future2;
	id _future3;
	id _future4;

}

@property (readonly) NSString * name; 
@property (readonly) char ignoresInput; 
@property (retain) NSString * selectedInputType; 
@property (retain) NSString * selectedOutputType; 
@property (assign) double progressValue; 
@property (retain) id output; 
@property (getter=isStopped,readonly) char stopped; 
+(char)checkCustomActionsDirectoryOnDisk;
+(char)writeCustomActionToDiskWithProperties:(id)arg1 ;
+(id)actionsFromDescriptions:(id)arg1 error:(id*)arg2 ;
-(void)setSelectedInputType:(NSString *)arg1 ;
-(void)setSelectedOutputType:(NSString *)arg1 ;
-(id)inputConnectionPoints;
-(id)outputConnectionPoints;
-(id)bindings;
-(id)outputAsArrayOfResultsItems;
-(char)isDeprecated;
-(id)richTextOutput;
-(NSString *)selectedInputType;
-(NSString *)selectedOutputType;
-(double)progressValue;
-(void)setProgressValue:(double)arg1 ;
-(id)acceptsDictionary;
-(id)providesDictionary;
-(id)acceptsContainer;
-(id)_acceptsTypes;
-(char)_isPassThroughAction;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(void)setOutput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(id)loopParent;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)didFinishRunningWithError:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)_runWithInputDeprecated:(id)arg1 ;
-(id)_runWithInput:(id)arg1 ;
-(id)output;
-(void)setLoopParent:(id)arg1 ;
-(char)acceptsInput;
-(char)ignoresInput;
-(id)_emptyInput;
-(char)showWhenRun;
-(void)setHasBeenRun:(char)arg1 ;
-(id)runner;
-(id)createRuntimeParameters;
-(void)setRuntimeParameters:(id)arg1 ;
-(char)hasVariableBoundToInput;
-(void)willFinishRunning;
-(void)assignBindingsToVariables;
-(void)_stop;
-(void)setErrorString:(id)arg1 ;
-(void)setErrorNumber:(id)arg1 ;
-(void)setErrorRange:(NSRange)arg1 ;
-(id)workflow;
-(void)resetForLoop;
-(void)writeToDictionary:(id)arg1 ;
-(id)_definition;
-(char)parameterKeyIsBoundToAMTokenField:(id)arg1 ;
-(void)activated;
-(void)updateParameters;
-(void)parametersUpdated;
-(id)runtimeParameters;
-(void)opened;
-(id)initWithDefinition:(id)arg1 fromArchive:(char)arg2 ;
-(id)_largeIcon;
-(void)setLargeIcon:(id)arg1 ;
-(id)iconPath;
-(id)parameterProperties;
-(id)_variablePropertyListsFromActionParameters;
-(id)_providesTypes;
-(char)canIgnoreInput;
-(char)canShowWhenRun;
-(id)largeIcon;
-(void)addInputConnectionPoint:(id)arg1 ;
-(void)addOutputConnectionPoint:(id)arg1 ;
-(id)createNewBindings;
-(id)nameForParameterKey:(id)arg1 ;
-(char)hasView;
-(id)keywords;
-(char)treatsOutputAsValue;
-(id)createOutputAsArrayOfResultsItems;
-(id)conversionPath;
-(id)_variablesCompletingSubstring:(id)arg1 ;
-(id)providesContainer;
-(void)runWithInput:(id)arg1 loopParent:(id)arg2 ;
-(id)_runConversionActionWithInput:(id)arg1 error:(id*)arg2 ;
-(void)_stop:(id)arg1 ;
-(id)propertyListWithError:(id*)arg1 ;
-(void)willBecomeActive;
-(void)_activated;
-(void)_parametersUpdated;
-(void)parametersChanged;
-(void)_opened;
-(void)_closed;
-(void)_setDefinition:(id)arg1 ;
-(id)_definitionForPasteboard;
-(void)setRunner:(id)arg1 ;
-(void)setWorkflow:(id)arg1 ;
-(void)setResourceFailures:(id)arg1 ;
-(id)resourceFailures;
-(char)hasResourceFailures;
-(char)providesOutput;
-(void)setIgnoresInput:(char)arg1 ;
-(char)hasGenericInputType;
-(char)hasGenericOutputType;
-(void)setCommand:(id)arg1 ;
-(id)_descriptionViewItem;
-(void)setUserDescription:(id)arg1 ;
-(id)userDescription;
-(void)setApplications:(id)arg1 ;
-(id)unlocalizedApplications;
-(void)setKeywords:(id)arg1 ;
-(id)warningDictionary;
-(id)requiredResources;
-(void)setRequiredResources:(id)arg1 ;
-(void)setHelpLocation:(id)arg1 ;
-(id)helpLocation;
-(void)setHelpType:(long long)arg1 ;
-(long long)helpType;
-(void)_setIsDeprecated:(char)arg1 ;
-(id)deprecatedReplacementActionsStringAsHTML:(char)arg1 ;
-(void)setAcceptsDictionary:(id)arg1 ;
-(void)setProvidesDictionary:(id)arg1 ;
-(void)setAtRunAcceptsDictionary:(id)arg1 ;
-(id)atRunAcceptsDictionary;
-(void)setAtRunProvidesDictionary:(id)arg1 ;
-(id)atRunProvidesDictionary;
-(id)inputTypeNames;
-(id)outputTypeNames;
-(void)setParameterProperties:(id)arg1 ;
-(id)createNewParameterProperties;
-(void)updateParameterProperties;
-(void)setAsStartAction:(char)arg1 ;
-(char)isStartAction;
-(char)isGenericAction;
-(char)isCustomAction;
-(void)setCustomAction:(char)arg1 ;
-(id)customActionVariablePropertyLists;
-(void)setCustomActionVariablePropertyLists:(id)arg1 ;
-(unsigned long long)relevance;
-(id)relevanceAsNSNumber;
-(void)setRelevance:(unsigned long long)arg1 ;
-(char)showsRelevance;
-(void)setShowsRelevance:(char)arg1 ;
-(unsigned long long)useCount;
-(void)setUseCount:(unsigned long long)arg1 ;
-(void)setShowWhenRun:(char)arg1 ;
-(char)canShowSelectedItemsWhenRun;
-(void)setCanShowSelectedItemsWhenRun:(char)arg1 ;
-(char)showOnlySelectedItemsWhenRun;
-(void)setShowOnlySelectedItemsWhenRun:(char)arg1 ;
-(id)selectedShowWhenRunItemNames;
-(void)setSelectedShowWhenRunItemNames:(id)arg1 ;
-(void)setCanShowWhenRun:(char)arg1 ;
-(char)containsSearchValue:(id)arg1 mask:(long long)arg2 ;
-(char)containsKeywords:(id)arg1 ;
-(char)containsCategories:(id)arg1 ;
-(char)hasOutput;
-(char)hasInput;
-(char)hasBeenRun;
-(void)setUUID:(id)arg1 ;
-(id)inputUUID;
-(void)setInputUUID:(id)arg1 ;
-(id)outputUUID;
-(void)setOutputUUID:(id)arg1 ;
-(id)errorUUID;
-(void)setErrorUUID:(id)arg1 ;
-(char)acceptsProgramControl;
-(bycopy id)_proxyOutputData;
-(bycopy id)proxyRichTextOutput;
-(unsigned long long)countOfOutput;
-(char)hasOutputAsArrayOfResultsItems;
-(void)proxyActionDidRun:(id)arg1 ;
-(id)input;
-(void)setInputValue:(id)arg1 ;
-(long long)conversionLabel;
-(void)setConversionLabel:(long long)arg1 ;
-(long long)conversionDistance;
-(void)setConversionDistance:(long long)arg1 ;
-(void)addToConversionPath:(id)arg1 ;
-(void)clearConversionPath;
-(id)checkForResourceFailure;
-(void)removeInputConnectionPoint:(id)arg1 ;
-(void)removeOutputConnectionPoint:(id)arg1 ;
-(id)errorNumber;
-(id)errorString;
-(NSRange)errorRange;
-(bycopy id)proxyErrorNumber;
-(bycopy id)proxyErrorString;
-(bycopy id)proxyErrorRange;
-(void)logMessageWithLevel:(unsigned long long)arg1 format:(id)arg2 ;
-(id)actionViewClassName;
-(char)isAMAction__;
-(id)UUID;
-(char)isDisabled;
-(void)setDisabled:(char)arg1 ;
-(id)dateAdded;
-(void)setDateAdded:(id)arg1 ;
-(id)summary;
-(void)setSummary:(id)arg1 ;
-(id)_delegate;
-(void)willOpen;
-(id)bundle;
-(void)closed;
-(id)bundleVersion;
-(char)hasOptions;
-(id)descriptionDictionary;
-(id)init;
-(void)dealloc;
-(void)stop;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)view;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIcon:(id)arg1 ;
-(id)icon;
-(id)type;
-(void)resume;
-(id)arguments;
-(id)_auxiliaryStorage;
-(char)isLeaf;
-(void)reset;
-(char)control:(id)arg1 isValidObject:(id)arg2 ;
-(void)setValue:(id)arg1 ;
-(char)isViewLoaded;
-(id)error;
-(void)setError:(id)arg1 ;
-(id)command;
-(void)_setDelegate:(id)arg1 ;
-(id)comment;
-(void)setComment:(id)arg1 ;
-(id)_icon;
-(id)version;
-(void)_reset;
-(void)pause;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2 ;
-(id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)applications;
-(id)value;
-(void)setArguments:(id)arg1 ;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(id)categories;
-(char)isStopped;
-(void)setCategories:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)definition;
-(void)_updateParameters;
@end

