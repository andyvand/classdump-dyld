/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _NSTableUtilities : NSObject
+(void)_registerTableColumnBinder:(id)arg1 toTableColumn:(id)arg2 autoCreateReferenceController:(id)arg3 ;
+(void)_unregisterTableColumnBinder:(id)arg1 fromTableColumn:(id)arg2 ;
+(id)_tableBinderForTableView:(id)arg1 ;
+(void)_breakConnectionOfTableBinderIfAutoCreated:(id)arg1 ;
+(void)_setPartialKeysWithTableBinder:(id)arg1 forAllTableColumnBindersOfTableView:(id)arg2 ;
+(void)_setPartialKeysWithTableBinder:(id)arg1 forTableColumnBinder:(id)arg2 ;
+(id)_referenceBinderForTableColumn:(id)arg1 ;
+(char)_tableBinderForTableViewSupportsSorting:(id)arg1 ;
+(id)_referenceBinderAtIndex:(unsigned long long)arg1 forTableView:(id)arg2 ;
@end

