/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSArrayDetailBinder.h>

@interface NSDictionaryDetailBinder : NSArrayDetailBinder
+(char)isUsableWithObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
+(id)binderClassesSuperseded;
-(id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(char)arg2 ;
-(id)_referenceBinding;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(char)_canGuaranteeOrderOfContentObjects;
-(void)_refreshDetailContentInBackground:(char)arg1 ;
-(char)_performArrayBinderOperation:(long long)arg1 singleObject:(id)arg2 multipleObjects:(id)arg3 singleIndex:(unsigned long long)arg4 multipleIndexes:(id)arg5 selectionMode:(int*)arg6 ;
-(void)noteContentValueHasChanged;
@end

