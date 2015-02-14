-[TerminationListener initWithHostPath:executablePath:parentProcessId:folderPath:shouldRelaunch:selfPath:alreadyInstalled:]
-[TerminationListener dealloc]
-[TerminationListener parentHasQuit]
-[TerminationListener watchdog:]
-[TerminationListener showAppIconInDock:]
-[TerminationListener relaunch]
-[TerminationListener install]
-[TerminationListener installerFinishedForHost:]
-[TerminationListener installerForHost:failedWithError:]
-[TerminationListener host]
_main
_SULog
-[SUHost initWithBundle:]
-[SUHost dealloc]
-[SUHost description]
-[SUHost bundle]
-[SUHost bundlePath]
-[SUHost appSupportPath]
-[SUHost installationPath]
-[SUHost name]
-[SUHost version]
-[SUHost displayVersion]
-[SUHost icon]
-[SUHost isRunningOnReadOnlyVolume]
-[SUHost isBackgroundApplication]
-[SUHost publicDSAKey]
-[SUHost systemProfile]
-[SUHost objectForInfoDictionaryKey:]
-[SUHost boolForInfoDictionaryKey:]
-[SUHost objectForUserDefaultsKey:]
-[SUHost setObject:forUserDefaultsKey:]
-[SUHost boolForUserDefaultsKey:]
-[SUHost setBool:forUserDefaultsKey:]
-[SUHost objectForKey:]
-[SUHost boolForKey:]
+[SUHost systemVersionString]
+[SUInstaller updateFolder]
+[SUInstaller isAliasFolderAtPath:]
+[SUInstaller installSourcePathInUpdateFolder:forHost:isPackage:]
+[SUInstaller appPathInUpdateFolder:forHost:]
+[SUInstaller installFromUpdateFolder:overHost:installationPath:delegate:synchronously:versionComparator:]
+[SUInstaller mdimportInstallationPath:]
+[SUInstaller finishInstallationToPath:withResult:host:error:delegate:]
+[SUInstaller notifyDelegateOfFailure:]
-[SUStatusController initWithHost:]
-[SUStatusController dealloc]
-[SUStatusController description]
-[SUStatusController awakeFromNib]
-[SUStatusController windowTitle]
-[SUStatusController applicationIcon]
-[SUStatusController beginActionWithTitle:maxProgressValue:statusText:]
-[SUStatusController setButtonTitle:target:action:isDefault:]
-[SUStatusController progressBarShouldAnimate]
-[SUStatusController setButtonEnabled:]
-[SUStatusController progressValue]
-[SUStatusController setProgressValue:]
-[SUStatusController maxProgressValue]
-[SUStatusController setMaxProgressValue:]
-[SUStatusController setStatusText:]
+[SUPlainInstaller finishInstallationWithInfo:]
+[SUPlainInstaller performInstallationWithInfo:]
+[SUPlainInstaller performInstallationToPath:fromPath:host:delegate:synchronously:versionComparator:]
+[SUStandardVersionComparator defaultComparator]
-[SUStandardVersionComparator typeOfCharacter:]
-[SUStandardVersionComparator splitVersionString:]
-[SUStandardVersionComparator compareVersion:toVersion:]
+[SUSystemProfiler sharedSystemProfiler]
-[SUSystemProfiler modelTranslationTable]
-[SUSystemProfiler systemProfileArrayForHost:]
+[SUPackageInstaller finishInstallationWithInfo:]
+[SUPackageInstaller performInstallationWithInfo:]
+[SUPackageInstaller performInstallationToPath:fromPath:host:delegate:synchronously:versionComparator:]
-[SUWindowController initWithHost:windowNibName:]
+[SUPlainInstaller(Internals) temporaryNameForPath:]
+[SUPlainInstaller(Internals) _temporaryCopyNameForPath:didFindTrash:]
+[SUPlainInstaller(Internals) _copyPathWithForcedAuthentication:toPath:temporaryPath:error:]
_AuthorizationExecuteWithPrivilegesAndWait
+[SUPlainInstaller(Internals) _movePathWithForcedAuthentication:toPath:error:]
+[SUPlainInstaller(Internals) _removeFileAtPathWithForcedAuthentication:error:]
+[SUPlainInstaller(Internals) _removeFileAtPath:error:]
+[SUPlainInstaller(Internals) _movePathToTrash:]
+[SUPlainInstaller(Internals) copyPathWithAuthentication:overPath:temporaryName:error:]
+[SUPlainInstaller(MMExtendedAttributes) removeXAttr:fromFile:options:]
+[SUPlainInstaller(MMExtendedAttributes) releaseFromQuarantine:]
GCC_except_table5
GCC_except_table9
_pvars
_SUPublicDSAKeyKey
_SUPublicDSAKeyFileKey
_SUDefaultsDomainKey
_SUSparkleErrorDomain
_OBJC_CLASS_$_TerminationListener
_OBJC_METACLASS_$_TerminationListener
_OBJC_CLASS_$_SUHost
_OBJC_METACLASS_$_SUHost
_OBJC_METACLASS_$_SUInstaller
_OBJC_CLASS_$_SUInstaller
_OBJC_CLASS_$_SUStatusController
_OBJC_METACLASS_$_SUStatusController
_OBJC_METACLASS_$_SUPlainInstaller
_OBJC_CLASS_$_SUPlainInstaller
_OBJC_CLASS_$_SUStandardVersionComparator
_OBJC_METACLASS_$_SUStandardVersionComparator
_OBJC_METACLASS_$_SUSystemProfiler
_OBJC_CLASS_$_SUSystemProfiler
_OBJC_METACLASS_$_SUPackageInstaller
_OBJC_CLASS_$_SUPackageInstaller
_OBJC_CLASS_$_SUWindowController
_OBJC_METACLASS_$_SUWindowController
_OBJC_IVAR_$_TerminationListener.hostpath
_OBJC_IVAR_$_TerminationListener.executablepath
_OBJC_IVAR_$_TerminationListener.parentprocessid
_OBJC_IVAR_$_TerminationListener.folderpath
_OBJC_IVAR_$_TerminationListener.selfPath
_OBJC_IVAR_$_TerminationListener.shouldRelaunch
_OBJC_IVAR_$_TerminationListener.alreadyInstalled
_OBJC_IVAR_$_TerminationListener.watchdogTimer
_OBJC_IVAR_$_TerminationListener.longInstallationTimer
_OBJC_IVAR_$_TerminationListener.installationPath
_OBJC_IVAR_$_TerminationListener.host
_OBJC_IVAR_$_SUHost.bundle
_OBJC_IVAR_$_SUHost.defaultsDomain
_OBJC_IVAR_$_SUHost.usesStandardUserDefaults
_OBJC_IVAR_$_SUStatusController.host
_OBJC_IVAR_$_SUStatusController.title
_OBJC_IVAR_$_SUStatusController.statusText
_OBJC_IVAR_$_SUStatusController.buttonTitle
_OBJC_IVAR_$_SUStatusController.progressBar
_OBJC_IVAR_$_SUStatusController.actionButton
_OBJC_IVAR_$_SUStatusController.progressValue
_OBJC_IVAR_$_SUStatusController.maxProgressValue
_SUFileCopyFailure
_SUAuthenticationFailure
_SUMissingUpdateError
_SUMissingInstallerToolError
_SUDowngradeError
_SUPackageInstallerCommandKey
_SUPackageInstallerArgumentsKey
_SUPackageInstallerHostKey
_SUPackageInstallerDelegateKey
_SUPackageInstallerInstallationPathKey
_sUpdateFolder
+[SUStandardVersionComparator defaultComparator].defaultComparator
+[SUSystemProfiler sharedSystemProfiler].sharedSystemProfiler
_NXArgc
_NXArgv
___progname
__mh_execute_header
_environ
start
_AuthorizationCreate
_AuthorizationExecuteWithPrivileges
_AuthorizationFree
_CFBooleanGetValue
_CFMakeCollectable
_CFPreferencesCopyAppValue
_CFPreferencesSetValue
_CFPreferencesSynchronize
_CFRelease
_CFURLGetFSRef
_CGWindowLevelForKey
_FSCopyObjectSync
_FSFindFolder
_FSGetCatalogInfo
_FSIsAliasFile
_FSMoveObjectSync
_FSPathMakeRef
_FSPathMakeRefWithOptions
_FSRefMakePath
_Gestalt
_GetCurrentProcess
_GetProcessForPID
_NSAppKitVersionNumber
_NSFileType
_NSFileTypeDirectory
_NSFileTypeForHFSTypeCode
_NSLocalizedDescriptionKey
_NSLog
_NSRunAlertPanel
_NSSearchPathForDirectoriesInDomains
_NSWorkspaceRecycleOperation
_OBJC_CLASS_$_NSApplication
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSConnection
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableCharacterSet
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTask
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSWindowController
_OBJC_CLASS_$_NSWorkspace
_OBJC_EHTYPE_$_NSException
_OBJC_EHTYPE_id
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSWindowController
_ProcessInformationCopyDictionary
_TransformProcessType
__Unwind_Resume
___CFConstantStringClassReference
___bzero
___error
___objc_personality_v0
___snprintf_chk
___stack_chk_fail
___stack_chk_guard
__objc_empty_cache
__objc_empty_vtable
_access
_atoi
_exit
_fclose
_floor
_fopen
_free
_fwrite
_getppid
_kCFPreferencesAnyHost
_kCFPreferencesCurrentUser
_kUTTypeApplication
_kUTTypeBundle
_malloc
_objc_begin_catch
_objc_end_catch
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSend_stret
_removexattr
_signal
_stat$INODE64
_statfs$INODE64
_strcmp
_strlen
_sysctlbyname
_wait
dyld_stub_binder
