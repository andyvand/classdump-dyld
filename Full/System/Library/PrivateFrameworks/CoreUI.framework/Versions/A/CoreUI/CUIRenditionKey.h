/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/NSCopying.h>
#import <CoreUI/NSCoding.h>

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding> {

	renditionkeytoken _stackKey[16];
	renditionkeytoken* _key;
	unsigned short _highwaterKeyCount;

}
+(id)renditionKeyWithKeyList:(const renditionkeytoken*)arg1 ;
+(id)_placeHolderKey;
+(void)initialize;
+(id)renditionKey;
-(const renditionkeytoken*)keyList;
-(void)setThemeElement:(long long)arg1 ;
-(void)setThemePart:(long long)arg1 ;
-(void)setThemeScale:(long long)arg1 ;
-(void)setThemeDimension1:(long long)arg1 ;
-(void)setThemePreviousValue:(long long)arg1 ;
-(void)setThemePreviousState:(long long)arg1 ;
-(void)setThemeSize:(long long)arg1 ;
-(void)setThemeDirection:(long long)arg1 ;
-(void)setThemeLayer:(long long)arg1 ;
-(long long)themeState;
-(long long)themeSize;
-(id)initWithKeyList:(const renditionkeytoken*)arg1 ;
-(long long)themeLayer;
-(void)copyValuesFromKeyList:(const renditionkeytoken*)arg1 ;
-(void)setValuesFromKeyList:(const renditionkeytoken*)arg1 ;
-(long long)themeValue;
-(void)_expandKeyIfNecessaryForCount:(long long)arg1 ;
-(unsigned short)_systemTokenCount;
-(long long)themeElement;
-(long long)themePart;
-(long long)themeDirection;
-(long long)themeDimension1;
-(long long)themeDimension2;
-(long long)themePresentationState;
-(long long)themePreviousState;
-(long long)themePreviousValue;
-(long long)themeIdentifier;
-(id)nameOfAttributeName:(int)arg1 ;
-(void)removeValueForKeyTokenIdentifier:(long long)arg1 ;
-(id)initWithThemeElement:(long long)arg1 themePart:(long long)arg2 themeSize:(long long)arg3 themeDirection:(long long)arg4 themeValue:(long long)arg5 themeDimension1:(long long)arg6 themeDimension2:(long long)arg7 themeState:(long long)arg8 themePresentationState:(long long)arg9 themeLayer:(long long)arg10 themeScale:(long long)arg11 themeIdentifier:(long long)arg12 ;
-(void)setThemeDimension2:(long long)arg1 ;
-(void)setThemeIdiom:(long long)arg1 ;
-(long long)themeIdiom;
-(void)setThemeSubtype:(long long)arg1 ;
-(long long)themeSubtype;
-(void)setThemeSizeClassHorizontal:(long long)arg1 ;
-(long long)themeSizeClassHorizontal;
-(void)setThemeSizeClassVertical:(long long)arg1 ;
-(long long)themeSizeClassVertical;
-(void)setThemeMemoryClass:(long long)arg1 ;
-(long long)themeMemoryClass;
-(void)setThemeGraphicsClass:(long long)arg1 ;
-(long long)themeGraphicsClass;
-(void)setThemeIdentifier:(long long)arg1 ;
-(id)descriptionBasedOnKeyFormat:(const renditionkeyfmt*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)themeScale;
-(void)setThemeState:(long long)arg1 ;
-(void)setThemePresentationState:(long long)arg1 ;
-(void)setThemeValue:(long long)arg1 ;
@end

