/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, AMApplicationDefinition, NSArray;

@interface AMApplicationRegistry : NSObject {

	NSMutableDictionary* _definitionRegistry;
	NSMutableDictionary* _typeRegistry;
	char _didLoadDeprecatedDefinitions;

}

@property (readonly) AMApplicationDefinition * definitionForMainBundle; 
@property (readonly) NSArray * applicationNames; 
@property (readonly) NSArray * applicationDefinitions; 
@property (retain) NSMutableDictionary * definitionRegistry;                         //@synthesize definitionRegistry=_definitionRegistry - In the implementation block
@property (retain) NSMutableDictionary * typeRegistry;                               //@synthesize typeRegistry=_typeRegistry - In the implementation block
@property (assign) char didLoadDeprecatedDefinitions;                                //@synthesize didLoadDeprecatedDefinitions=_didLoadDeprecatedDefinitions - In the implementation block
+(id)sharedApplicationRegistry;
+(id)imagePathKeyForApplicationWithName:(id)arg1 ;
-(id)nameForDefinedType:(id)arg1 ;
-(void)loadNondeprecatedDefinitions;
-(void)setDefinitionRegistry:(NSMutableDictionary *)arg1 ;
-(void)setTypeRegistry:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)definitionRegistry;
-(id)_systemLibraryURL;
-(id)deprecatedSystemDefinitionLocation;
-(id)_definitionURLsAtLocations:(id)arg1 deprecatedOnly:(char)arg2 ;
-(id)standardNondeprecatedDefinitionLocations;
-(void)setName:(id)arg1 forDefinedType:(id)arg2 ;
-(char)loadDefinition:(id)arg1 ;
-(char)loadDefinitionAtURL:(id)arg1 ;
-(id)deprecatedSystemDefinitionURLs;
-(void)_loadDefinitionsAtURLS:(id)arg1 ;
-(char)didLoadDeprecatedDefinitions;
-(void)_loadDeprecatedSystemDefinitions;
-(void)setDidLoadDeprecatedDefinitions:(char)arg1 ;
-(id)externalDefinitionURLs;
-(void)loadDeprecatedSystemDefinitionsIfNeeded;
-(NSMutableDictionary *)typeRegistry;
-(NSArray *)applicationDefinitions;
-(AMApplicationDefinition *)definitionForMainBundle;
-(NSArray *)applicationNames;
-(id)definitionForApplicationName:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

