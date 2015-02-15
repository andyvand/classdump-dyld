/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/class-dump
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <class-dump/class-dump-Structs.h>
@class CDSearchPathState, NSRegularExpression, NSString, NSMutableArray, NSMutableDictionary, CDTypeController, NSArray;

@interface CDClassDump : NSObject {

	CDSearchPathState* _searchPathState;
	char _shouldProcessRecursively;
	char _shouldSortClasses;
	char _shouldSortClassesByInheritance;
	char _shouldSortMethods;
	char _shouldShowIvarOffsets;
	char _shouldShowMethodAddresses;
	char _shouldShowHeader;
	NSRegularExpression* _regularExpression;
	NSString* _sdkRoot;
	NSMutableArray* _machOFiles;
	NSMutableDictionary* _machOFilesByName;
	NSMutableArray* _objcProcessors;
	CDTypeController* _typeController;
	SCD_Struct_CD0 _targetArch;

}

@property (readonly) CDSearchPathState * searchPathState;                  //@synthesize searchPathState=_searchPathState - In the implementation block
@property (assign) char shouldProcessRecursively;                          //@synthesize shouldProcessRecursively=_shouldProcessRecursively - In the implementation block
@property (assign) char shouldSortClasses;                                 //@synthesize shouldSortClasses=_shouldSortClasses - In the implementation block
@property (assign) char shouldSortClassesByInheritance;                    //@synthesize shouldSortClassesByInheritance=_shouldSortClassesByInheritance - In the implementation block
@property (assign) char shouldSortMethods;                                 //@synthesize shouldSortMethods=_shouldSortMethods - In the implementation block
@property (assign) char shouldShowIvarOffsets;                             //@synthesize shouldShowIvarOffsets=_shouldShowIvarOffsets - In the implementation block
@property (assign) char shouldShowMethodAddresses;                         //@synthesize shouldShowMethodAddresses=_shouldShowMethodAddresses - In the implementation block
@property (assign) char shouldShowHeader;                                  //@synthesize shouldShowHeader=_shouldShowHeader - In the implementation block
@property (retain) NSRegularExpression * regularExpression;                //@synthesize regularExpression=_regularExpression - In the implementation block
@property (retain) NSString * sdkRoot;                                     //@synthesize sdkRoot=_sdkRoot - In the implementation block
@property (readonly) NSArray * machOFiles;                                 //@synthesize machOFiles=_machOFiles - In the implementation block
@property (readonly) NSArray * objcProcessors;                             //@synthesize objcProcessors=_objcProcessors - In the implementation block
@property (assign) SCD_Struct_CD0 targetArch;                              //@synthesize targetArch=_targetArch - In the implementation block
@property (nonatomic,readonly) char containsObjectiveCData; 
@property (nonatomic,readonly) char hasEncryptedFiles; 
@property (nonatomic,readonly) char hasObjectiveCRuntimeInfo; 
@property (readonly) CDTypeController * typeController;                    //@synthesize typeController=_typeController - In the implementation block
-(NSArray *)objcProcessors;
-(NSArray *)machOFiles;
-(char)containsObjectiveCData;
-(char)hasEncryptedFiles;
-(char)shouldProcessRecursively;
-(CDSearchPathState *)searchPathState;
-(id)machOFileWithName:(id)arg1 ;
-(void)recursivelyVisit:(id)arg1 ;
-(NSString *)sdkRoot;
-(char)loadFile:(id)arg1 error:(id*)arg2 ;
-(char)shouldShowHeader;
-(CDTypeController *)typeController;
-(char)shouldShowName:(id)arg1 ;
-(char)hasObjectiveCRuntimeInfo;
-(void)processObjectiveCData;
-(void)appendHeaderToString:(id)arg1 ;
-(void)registerTypes;
-(void)showHeader;
-(void)showLoadCommands;
-(void)setShouldProcessRecursively:(char)arg1 ;
-(char)shouldSortClasses;
-(void)setShouldSortClasses:(char)arg1 ;
-(char)shouldSortClassesByInheritance;
-(void)setShouldSortClassesByInheritance:(char)arg1 ;
-(char)shouldSortMethods;
-(void)setShouldSortMethods:(char)arg1 ;
-(char)shouldShowIvarOffsets;
-(void)setShouldShowIvarOffsets:(char)arg1 ;
-(char)shouldShowMethodAddresses;
-(void)setShouldShowMethodAddresses:(char)arg1 ;
-(void)setShouldShowHeader:(char)arg1 ;
-(void)setSdkRoot:(NSString *)arg1 ;
-(SCD_Struct_CD0)targetArch;
-(void)setTargetArch:(SCD_Struct_CD0)arg1 ;
-(id)init;
-(NSRegularExpression *)regularExpression;
-(void)setRegularExpression:(NSRegularExpression *)arg1 ;
@end
