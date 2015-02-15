/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreText/CoreText-Structs.h>
@class NSMutableDictionary;

@interface FontAssetDownloadManager : NSObject {

	TCFRef<const __CFArray *>* fDescriptors;
	TCFRef<const __CFSet *>* fMandatoryAttributes;
	/*^block*/id fProgressCallbackBlock;
	NSMutableDictionary* fProgressParams;

}
+(char)shouldTryServer;
+(id)displayNameForCurrentUser:(id)arg1 ;
+(id)availableFontAttributesArray;
-(char)callProgressCallbak:(unsigned)arg1 ;
-(id)getUnmatchedDescriptors;
-(id)mobileAssetsForUnmatched:(id)arg1 andFontFilePaths:(id)arg2 ;
-(unsigned long long)calculateDownloadSize:(id)arg1 ;
-(void)setProgressParam:(id)arg1 forKey:(id)arg2 ;
-(char)executeDownloadingFontAssets:(id)arg1 forDescriptors:(id)arg2 andFontFilePaths:(id)arg3 ;
-(id)doFinalMatching;
-(id)predicateForDescriptor:(CTFontDescriptorRef)arg1 ;
-(id)availableMobileAssets:(char)arg1 error:(id*)arg2 ;
-(id)extractMatchingAssetsForDescriptor:(CTFontDescriptorRef)arg1 from:(id)arg2 withFailInfo:(char*)arg3 andFontFilePaths:(id)arg4 ;
-(id)initWithDescriptors:(CFArrayRef)arg1 andMandatoryAttributes:(CFSetRef)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)downloadFontAssets;
-(void)dealloc;
@end
