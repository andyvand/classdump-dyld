/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ISDNameNumberMapping;

@interface ISDNameNumberProvider : NSObject {

	ISDNameNumberMapping* _entityMapping;
	ISDNameNumberMapping* _clientMapping;
	char _mapsInitialized;
	char _isValid;
	char _canCreate;
	char _canSave;
	char _irreplaceable;
	char _useRegardless;
	id _basis;
	char _inRefresh;

}
+(id)defaultProvider;
+(void)setProvider:(id)arg1 ;
+(id)provider;
+(char)syncClientCanCreateMappings;
+(void)revertToDefault;
+(void)replaceProvider:(id)arg1 ;
+(void)setSyncClientCanCreateMappings:(char)arg1 ;
-(id)entityMapping;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)invalidate;
-(void)clear;
-(void)reset;
-(void)refresh;
-(char)foundMappingForNewName:(id)arg1 inMap:(id)arg2 ;
-(id)clientMapping;
-(void)saveMappings;
-(void)saveMappingsFor:(id)arg1 ;
-(id)allMappings;
-(void)allowNonPersistentCreation;
-(char)canCreateNewMapping;
-(void)refreshFromNameNumberMappings:(id)arg1 ;
-(char)isReplaceable;
-(char)isDefaultProvider;
-(char)canSaveMappings;
-(char)mergeMissingMappingsFrom:(id)arg1 ;
-(void)makeIrreplaceable;
@end

