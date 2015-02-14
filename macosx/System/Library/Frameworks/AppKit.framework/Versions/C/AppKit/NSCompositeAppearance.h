/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSAppearance.h>

@class NSArray, NSString;

@interface NSCompositeAppearance : NSAppearance {

	NSArray* _appearances;
	NSString* _compositeName;

}

@property (copy) NSArray * appearances;              //@synthesize appearances=_appearances - In the implementation block
@property (copy) NSString * name; 
+(id)compositeAppearanceForView:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)_allowsVibrancyForColor:(id)arg1 ;
-(char)allowsVibrancy;
-(id)uniqueIdentifier;
-(int)_defaultBlendMode;
-(id)resolvedAppearanceForWidget:(id)arg1 styleConfiguration:(id)arg2 ;
-(id)resolvedAppearanceForStyleName:(id)arg1 styleConfiguration:(id)arg2 ;
-(id)_coreUICatalog;
-(char)_isDefaultAppearance;
-(long long)_internalVisualEffectMaterialForBlendingMode:(long long)arg1 ;
-(id)initWithAppearances:(id)arg1 ;
-(long long)_internalVisualEffectMaterialForTitlebar;
-(long long)_internalVisualEffectMaterialForSelection:(char)arg1 ;
-(long long)_internalVisualEffectMaterialForMenu;
-(id)_appearanceForSourceListTableView;
-(char)_isBuiltinAppearance;
-(id)resolvedAppearanceForWidget:(id)arg1 ;
-(int)_callCoreUIWithBlock:(/*^block*/id)arg1 ;
-(char)_backstoppedByDefaultAppearance;
-(id)resolvedAppearanceForColor:(id)arg1 ;
-(NSArray *)appearances;
-(void)setAppearances:(NSArray *)arg1 ;
@end

