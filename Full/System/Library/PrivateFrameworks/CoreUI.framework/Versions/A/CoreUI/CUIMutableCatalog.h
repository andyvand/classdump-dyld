/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUICatalog.h>

@interface CUIMutableCatalog : CUICatalog {

	unsigned _checkRespondsTo : 1;
	unsigned _respondsToCheck : 1;

}
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id*)arg3 ;
-(id)_baseKeyForName:(id)arg1 ;
-(void)insertCGImage:(CGImageRef)arg1 name:(id)arg2 scale:(double)arg3 idiom:(long long)arg4 subtype:(long long)arg5 ;
-(void)removeImageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(long long)arg4 ;
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
@end

