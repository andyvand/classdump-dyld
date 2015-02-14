/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class NSMutableDictionary, NSMutableArray, CIKernel, NSURL, NSBundle, NSString;

@interface CIPlugInStandardFilter : CIFilter {

	NSMutableDictionary* _inputs;
	NSMutableArray* _inputKeys;
	NSMutableArray* _outputKeys;
	NSMutableDictionary* _attributes;
	CIKernel* _filterKernel;
	NSURL* _kernelFileURL;
	NSBundle* _plugInBundle;
	dispatch_source_sRef kernelChangeSource;

}

@property (nonatomic,retain) NSBundle * bundle;                               //@synthesize plugInBundle=_plugInBundle - In the implementation block
@property (nonatomic,retain,readonly) NSString * kernelFilename; 
@property (nonatomic,retain,readonly) NSURL * kernelFileURL;                  //@synthesize kernelFileURL=_kernelFileURL - In the implementation block
+(char)isDebugging;
-(id)_provideFilterCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDescription:(id)arg1 kernelFile:(id)arg2 filterBundle:(id)arg3 ;
-(NSURL *)kernelFileURL;
-(NSString *)kernelFilename;
-(void)setupWatchingForKernelChanges;
-(void)loadKernel;
-(char)setupInputs;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
-(id)outputImage;
-(void)finalize;
-(void)dealloc;
-(id)attributes;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)inputKeys;
-(id)outputKeys;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

