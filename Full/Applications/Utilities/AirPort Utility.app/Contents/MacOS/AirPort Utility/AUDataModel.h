/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPort Utility/AUModelProtocol.h>

@protocol AUModelDelegate;
@class AUBaseModel, AUSetupController, AUDocument, NSMutableDictionary, NSString;

@interface AUDataModel : NSObject <AUModelProtocol> {

	id<AUModelDelegate> delegate;
	AUBaseModel* base;
	AUSetupController* setupController;
	AUDocument* document;
	NSMutableDictionary* propertyMap;
	NSMutableDictionary* flatSettingsDict;
	char modelChanged;
	char _dataLoaded;
	char _ignoreModelChanged;
	char _loadedOnceFlag;

}

@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic) AUBaseModel * base; 
@property (assign,nonatomic) AUDocument * document; 
@property (nonatomic,retain) AUSetupController * setupController; 
@property (nonatomic,retain) NSMutableDictionary * propertyMap; 
@property (nonatomic,retain) NSMutableDictionary * flatSettingsDict; 
@property (assign,nonatomic) char modelChanged; 
@property (assign,nonatomic) char dataLoaded;                                     //@synthesize dataLoaded=_dataLoaded - In the implementation block
@property (assign,nonatomic) char loadedOnceFlag;                                 //@synthesize loadedOnceFlag=_loadedOnceFlag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)saveData;
-(AUBaseModel *)base;
-(void)setModelChanged:(char)arg1 ;
-(char)dataLoaded;
-(void)loadDataForKeyPath:(id)arg1 ;
-(char)canUpdateModelChanged;
-(void)setBase:(AUBaseModel *)arg1 ;
-(NSMutableDictionary *)flatSettingsDict;
-(void)setFlatSettingsDict:(NSMutableDictionary *)arg1 ;
-(void)setDataLoaded:(char)arg1 ;
-(id)createError:(int)arg1 forSetting:(int)arg2 ;
-(char)loadedOnceFlag;
-(void)setLoadedOnceFlag:(char)arg1 ;
-(NSMutableDictionary *)propertyMap;
-(void)setPropertyMap:(NSMutableDictionary *)arg1 ;
-(char)modelChanged;
-(AUSetupController *)setupController;
-(void)setSetupController:(AUSetupController *)arg1 ;
-(id)errors;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(char)valid;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(void)didChangeValueForKey:(id)arg1 ;
-(AUDocument *)document;
-(void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)setDocument:(AUDocument *)arg1 ;
-(void)loadData;
@end

