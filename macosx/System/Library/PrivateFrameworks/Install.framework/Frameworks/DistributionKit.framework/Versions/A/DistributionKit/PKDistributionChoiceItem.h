/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Frameworks/DistributionKit.framework/Versions/A/DistributionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PKDistributionChoice, NSMutableArray, PKDistributionEvaluator, PKDistributionValueNode, NSMutableDictionary, NSObject, NSString, PKProduct, NSNumber;

@interface PKDistributionChoiceItem : NSObject {

	PKDistributionChoice* _choice;
	NSMutableArray* _childItems;
	PKDistributionChoiceItem* _parentNode;
	PKDistributionEvaluator* _evaluator;
	PKDistributionValueNode* _selectedNode;
	PKDistributionValueNode* _visibleNode;
	PKDistributionValueNode* _enabledNode;
	NSMutableDictionary* _pkgRefActiveNodes;
	NSObject*<OS_dispatch_queue> _pkgRefActiveQueue;
	PKDistributionValueNode* _startSelectedNode;
	PKDistributionValueNode* _startVisibleNode;
	PKDistributionValueNode* _startEnabledNode;
	char _isPkgRefDirty;
	NSString* _customLocation;
	PKProduct* _product;
	NSString* _displayName;
	NSString* _displayVersion;
	NSString* _displayDescription;
	NSString* tooltip;

}

@property (assign) char visible; 
@property (assign) char enabled; 
@property (assign) long long state; 
@property (copy) NSString * customLocation;                     //@synthesize customLocation=_customLocation - In the implementation block
@property (copy) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * displayVersion;                     //@synthesize displayVersion=_displayVersion - In the implementation block
@property (copy) NSString * displayDescription;                 //@synthesize displayDescription=_displayDescription - In the implementation block
@property (readonly) NSNumber * installSizeNumber; 
@property (retain) NSString * tooltip; 
@property (readonly) char startSelected; 
+(id)keyPathsForValuesAffectingPackageReferencesToInstall;
+(id)keyPathsForValuesAffectingInstallSizeNumber;
+(id)keyPathsForValuesAffectingButtonCellValue;
-(void)setTooltip:(NSString *)arg1 ;
-(void)_setNode:(id*)arg1 forAttribute:(id)arg2 initialNode:(id*)arg3 forStartAttribute:(id)arg4 ;
-(void)_evaluatorDidBecomeQuiescent:(id)arg1 ;
-(void)_setInitialDisplayProperties;
-(void)setDisplayDescription:(NSString *)arg1 ;
-(void)_restoreInitialState;
-(void)_propagateStateChange;
-(id)visibleChildren;
-(void)_setItemState:(long long)arg1 ;
-(id)_activePackageReferences;
-(id)_packageReferencesToInstall:(char)arg1 ;
-(id)_initWithDistributionChoice:(id)arg1 evaluator:(id)arg2 product:(id)arg3 ;
-(void)_distributionControllerDidLoadChoices;
-(void)setCustomLocation:(NSString *)arg1 ;
-(void)_addChild:(id)arg1 ;
-(id)_parentItem;
-(id)packageReferencesToInstallIgnoringChildren;
-(NSNumber *)installSizeNumber;
-(NSString *)customLocation;
-(id)buttonCellValue;
-(void)setButtonCellValue:(id)arg1 ;
-(char)visible;
-(char)enabled;
-(id)choice;
-(NSString *)displayDescription;
-(char)startSelected;
-(id)packageReferencesToInstall;
-(void)setDisplayVersion:(NSString *)arg1 ;
-(NSString *)tooltip;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setState:(long long)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(long long)state;
-(void)setVisible:(char)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)children;
-(NSString *)displayVersion;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

