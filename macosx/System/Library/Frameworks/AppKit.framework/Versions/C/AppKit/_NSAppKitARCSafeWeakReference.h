/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _NSAppKitARCSafeWeakReference : NSObject {

	id ref;
	int lock;
	char weakly;

}
+(void)storeNilSafeWeaklyInto:(id*)arg1 helperFlag:(char)arg2 ;
+(id)safeWeaklyLoadUnretainedValueFrom:(id*)arg1 helperFlag:(char)arg2 ;
+(char)storeValue:(id)arg1 safeWeaklyInto:(id*)arg2 helperFlag:(char)arg3 ;
+(id)safeWeaklyLoadRetainedValueFrom:(id*)arg1 helperFlag:(char)arg2 ;
+(id)safeWeaklyLoadAutoreleasedValueFrom:(id*)arg1 helperFlag:(char)arg2 ;
-(void)dealloc;
-(void)set:(id)arg1 ;
-(id)getUnretained;
-(id)getRetained;
-(id)get;
@end

