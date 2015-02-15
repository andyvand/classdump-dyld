-[NSURL(FCExtras) bundleID]
-[NSURL(FCExtras) bundleName]
-[NSMutableIndexSet(FCExtras) initWithArray:]
-[NSIndexSet(FCExtras) allObjects]
-[NSDate(FCExtras) followingMidnight]
+[NSDate(FCExtras) midnightDate]
-[NSDate(FCExtras) dateByAddingDays:]
-[NSDate(FCExtras) isWeekend]
-[NSDate(FCExtras) isDayBeforeWeekend]
-[NSDate(FCExtras) isFirstDayOfWeekend]
-[NSDate(FCExtras) isLastDayOfWeekend]
+[FCUtilities timeSpanStringWithFromHour:fromMinute:toHour:toMinute:]
+[FCUtilities timeDurationStringForSeconds:]
+[FCUtilities shortTimeDurationStringForSeconds:includeSeconds:]
+[FCUtilities timeStringWithHourIndex:]
+[FCUtilities timeStringWithHourIndex:minuteIndex:twentyFour:]
+[FCUtilities fcdReadOverridesFor:]
+[FCUtilities fcdResetUsageDataFor:]
+[FCUtilities fcdReadSettingsFor:]
+[FCUtilities fcdSaveUsageDataFor:]
+[FCUtilities fcdListeningStatusChanged]
+[FCUtilities kickMCXDForUID:]
_IsFilePackageAtPath
_ScanFolderForApps
_ReadMachHeader
_fdread
_MyStandardizePath
-[FCApp dealloc]
-[FCApp copyWithZone:]
-[FCApp mutableCopyWithZone:]
-[FCApp initWithDictionary:]
-[FCApp initWithPath:addingSubApps:creatingSignature:detached:]
+[FCApp appWithPath:addingSubApps:creatingSignature:detached:]
+[FCApp appWithPath:addingSubApps:]
+[FCApp appWithPath:]
+[FCApp appWithDictionary:]
+[FCApp appStoreRatingForString:]
-[FCApp _dictionary]
-[FCApp _stringWithOSType:]
+[FCApp setKeychainForCodesigning:]
-[FCApp plistRepresentation]
-[FCApp validateCodeSig:]
-[FCApp readBundleInfo]
-[FCApp description]
-[FCApp path]
-[FCApp setPath:]
-[FCApp displayName]
-[FCApp setDisplayName:]
-[FCApp bundleID]
-[FCApp setBundleID:]
-[FCApp appID]
-[FCApp setAppID:]
-[FCApp subApps]
-[FCApp setSubApps:]
-[FCApp detachedSignature]
-[FCApp setDetachedSignature:]
-[FCApp isFromAppStore]
-[FCApp setIsFromAppStore:]
-[FCApp appStoreRating]
-[FCApp setAppStoreRating:]
-[FCApp compare:]
-[FCTimer dealloc]
+[FCTimer fcTimer]
-[FCTimer fireWithTarget:selector:]
-[FCTimer invalidate]
-[FCTimer isWarning]
-[FCTimer setInterval:]
-[FCTimer interval]
-[FCTimer setKind:]
-[FCTimer kind]
-[FCTimer userInfo]
-[FCTimer setUserInfo:]
_MCXSettingsChangedCallback
_CachedUserDictionaryForUID
_GetFCPort
_CopyAppSigningIdentity
-[FCTime initWithHour:minute:second:]
-[FCTime initWithString:]
+[FCTime timeWithString:]
+[FCTime midnight]
+[FCTime nowTime]
-[FCTime compare:]
-[FCTime isEqual:]
-[FCTime stringValue]
-[FCTime dateValue]
-[FCTime dateValueForDate:]
-[FCTime seconds]
-[FCTime justBefore]
-[FCTime justAfter]
-[FCTime timeIntervalSinceTime:]
-[FCTime description]
-[NSDate(FCTimeAdditions) timeValue]
-[NSDate(FCTimeAdditions) approximatelyEqualTo:]
-[NSDate(FCTimeAdditions) midnightDate]
-[FCTimeRange dealloc]
-[FCTimeRange initWithStartTime:endTime:]
-[FCTimeRange initWithDictionary:]
+[FCTimeRange timeRangeWithStartTime:endTime:]
+[FCTimeRange timeRangeWithDictionary:]
-[FCTimeRange plistRepresentation]
-[FCTimeRange startTime]
-[FCTimeRange endTime]
-[FCTimeRange wraps]
-[FCTimeRange includesTime:]
-[FCTimeRange compare:]
-[FCTimeRange isEqual:]
-[FCTimeRange description]
-[FCWidget dealloc]
-[FCWidget copyWithZone:]
-[FCWidget mutableCopyWithZone:]
-[FCWidget initWithDictionary:]
-[FCWidget initWithPath:]
+[FCWidget widgetWithPath:]
+[FCWidget widgetWithDictionary:]
+[FCWidget installedWidgets]
-[FCWidget plistRepresentation]
-[FCWidget description]
-[FCWidget path]
-[FCWidget setPath:]
-[FCWidget displayName]
-[FCWidget setDisplayName:]
-[FCWidget bundleID]
-[FCWidget setBundleID:]
-[FCWidget isFromAppStore]
-[FCWidget setIsFromAppStore:]
-[FCWidget appStoreRating]
-[FCWidget setAppStoreRating:]
-[FCWidget compare:]
-[FCSafariBookmark initWithDictionary:]
___UUIDString
-[FCSafariBookmark initWithTitle:url:]
+[FCSafariBookmark bookmarkWithDictionary:]
-[FCSafariBookmark initWithCoder:]
-[FCSafariBookmark encodeWithCoder:]
-[FCSafariBookmark dealloc]
-[FCSafariBookmark dictionaryRepresentation]
-[FCSafariBookmark title]
-[FCSafariBookmark setTitle:]
-[FCSafariBookmark url]
-[FCSafariBookmark setURL:]
-[FCSafariBookmark isFolder]
-[FCSafariBookmark uuid]
-[FCSafariBookmark description]
-[FCSafariBookmarkFolder initWithDictionary:]
-[FCSafariBookmarkFolder initWithCoder:]
-[FCSafariBookmarkFolder encodeWithCoder:]
-[FCSafariBookmarkFolder initWithTitle:]
+[FCSafariBookmarkFolder bookmarkFolderWithFlatArray:]
+[FCSafariBookmarkFolder bookmarkWithDictionary:]
-[FCSafariBookmarkFolder title]
-[FCSafariBookmarkFolder setTitle:]
-[FCSafariBookmarkFolder bookmarks]
-[FCSafariBookmarkFolder allBookmarks]
-[FCSafariBookmarkFolder bookmarkAtIndex:]
-[FCSafariBookmarkFolder indexOfBookmarkFolderWithTitle:]
-[FCSafariBookmarkFolder indexOfBookmark:]
-[FCSafariBookmarkFolder folderForBookmark:]
-[FCSafariBookmarkFolder count]
-[FCSafariBookmarkFolder isFolder]
-[FCSafariBookmarkFolder addBookmark:]
-[FCSafariBookmarkFolder addBookmark:atIndex:]
-[FCSafariBookmarkFolder addBookmark:atPath:]
-[FCSafariBookmarkFolder removeBookmark:]
-[FCSafariBookmarkFolder removeBookmarks:]
-[FCSafariBookmarkFolder removeBookmarkAtIndex:]
-[FCSafariBookmarkFolder flatArrayWithArray:beginningAtPath:]
-[FCSafariBookmarkFolder flatArray]
-[FCSafariBookmarkFolder flatArrayOLD]
-[FCSafariBookmarkFolder description]
-[FCSafariBookmarkManager initWithPath:]
-[FCSafariBookmarkManager dealloc]
-[FCSafariBookmarkManager _bookmarksBarDictionary]
-[FCSafariBookmarkManager loadData]
-[FCSafariBookmarkManager dictionaryRepresentation]
-[FCSafariBookmarkManager allBookmarks]
-[FCSafariBookmarkManager bookmarksBarBookmarks]
-[FCSafariBookmarkManager fileVersion]
-[FCUserEventsManager initWithUserName:authorization:]
-[FCUserEventsManager dealloc]
-[FCUserEventsManager close]
-[FCUserEventsManager executeFetchRequest:entityName:]
-[FCUserEventsManager clearLogHistoryForEntityName:]
-[FCMCXHelper dealloc]
-[FCMCXHelper initWithMCXManager:]
+[FCMCXHelper mcxHelperForManager:]
-[FCMCXHelper removeForcedPrefsDictionaryForDomains:]
-[FCMCXHelper forcedPrefsObjectForKey:inDomain:]
-[FCMCXHelper setForcedPrefsObject:forKey:inDomain:]
-[FCMCXHelper removeForcedPrefsObjectForKey:inDomain:]
-[FCMCXHelper setForcedPrefsDictionary:inDomain:]
-[FCMCXHelper hasSettingsForDomains:]
-[FCMCXHelper MCXRAWDict]
-[FCTimeControl dateIsInEffect:]
-[FCTimeControl rangeType]
-[FCTimeControl setRangeType:]
-[FCTimeControl enabled]
-[FCTimeControl setEnabled:]
-[FCAllowanceTimeControl dealloc]
-[FCAllowanceTimeControl initWithRange:secondsPerDay:]
+[FCAllowanceTimeControl allowanceWithRange:secondsPerDay:enabled:]
+[FCAllowanceTimeControl allowanceFromDictionary:]
+[FCAllowanceTimeControl weekdayDefault]
+[FCAllowanceTimeControl weekendDefault]
-[FCAllowanceTimeControl plistRepresentation]
-[FCAllowanceTimeControl dateIsInEffect:]
-[FCAllowanceTimeControl description]
-[FCAllowanceTimeControl secondsPerDay]
-[FCAllowanceTimeControl setSecondsPerDay:]
-[FCCurfewTimeControl dealloc]
-[FCCurfewTimeControl initWithRange:start:end:]
+[FCCurfewTimeControl curfewWithRange:start:end:enabled:]
+[FCCurfewTimeControl curfewFromDictionary:]
+[FCCurfewTimeControl weekdayDefault]
+[FCCurfewTimeControl weekendDefault]
-[FCCurfewTimeControl plistRepresentation]
-[FCCurfewTimeControl range]
-[FCCurfewTimeControl dateIsInEffect:]
-[FCCurfewTimeControl description]
-[FCCurfewTimeControl start]
-[FCCurfewTimeControl setStart:]
-[FCCurfewTimeControl end]
-[FCCurfewTimeControl setEnd:]
-[FCTimeControls dealloc]
+[FCTimeControls timeControlsFromDictionary:]
+[FCTimeControls defaultTimeControls]
+[FCTimeControls timeControlsFromV1MCXDictionary:]
-[FCTimeControls plistRepresentation]
-[FCTimeControls _nonWrappingRangesForDate:]
-[FCTimeControls curfewBlocksDate:]
-[FCTimeControls allowanceIsInEffect:]
-[FCTimeControls curfewInEffect:]
-[FCTimeControls allowanceInEffect:]
-[FCTimeControls nextCurfewDateAfterDate:]
-[FCTimeControls nextNonCurfewDateAfterDate:]
-[FCTimeControls remainingTimeWithUsageSecs:extensions:result:date:]
+[FCTimeControls extendSecondsForToday:logoutDate:user:]
+[FCTimeControls extensionsForUser:date:]
+[FCTimeControls yesterdayRolloverSecondsForExtensions:date:clip:]
+[FCTimeControls totalExtendedSecondsForExtensions:date:]
+[FCTimeControls extendedSecondsWithExtensions:referenceDate:]
+[FCTimeControls curfewTimeRemainingWithExtensions:referenceDate:]
+[FCTimeControls extension:isFromDate:]
-[FCTimeControls weekdayAllowance]
-[FCTimeControls setWeekdayAllowance:]
-[FCTimeControls weekendAllowance]
-[FCTimeControls setWeekendAllowance:]
-[FCTimeControls weekdayCurfew]
-[FCTimeControls setWeekdayCurfew:]
-[FCTimeControls weekendCurfew]
-[FCTimeControls setWeekendCurfew:]
-[FCCurfews dealloc]
-[FCCurfews init]
-[FCCurfews initWithDictionary:]
+[FCCurfews curfews]
+[FCCurfews curfewsWithDictionary:]
+[FCCurfews keyStringForDayIndex:]
+[FCCurfews dayIndexForKeyString:]
-[FCCurfews _prep]
-[FCCurfews _firstCurfewTimeForRanges:afterTime:beforeTime:includeMedial:]
-[FCCurfews _firstNonCurfewTimeForRanges:afterTime:]
-[FCCurfews plistRepresentation]
-[FCCurfews hasCurfews]
-[FCCurfews addTimeRange:forDay:]
-[FCCurfews removeTimeRangesInRange:forDay:]
-[FCCurfews removeAllCurfews]
-[FCCurfews nextCurfewDateAfterDate:]
-[FCCurfews nextNonCurfewDateAfterDate:]
-[FCCurfews curfewStartDateCurrentlyInEffect]
-[FCCurfews isDateCurfewed:]
-[FCCurfews weekdayCurfewStartingTime]
-[FCCurfews weekendCurfewStartingTime]
-[FCCurfews weekdayCurfewEndingTime]
-[FCCurfews weekendCurfewEndingTime]
-[FCCurfews setWeekdayCurfewStarting:ending:]
-[FCCurfews setWeekendCurfewStarting:ending:]
-[FCCurfews removeWeekdayCurfew]
-[FCCurfews removeWeekendCurfew]
-[FCCurfews description]
-[FCAllowance dealloc]
-[FCAllowance init]
-[FCAllowance initWithDictionary:]
+[FCAllowance allowance]
+[FCAllowance defaultAllowance]
+[FCAllowance allowanceWithDictionary:]
-[FCAllowance plistRepresentation]
-[FCAllowance dateIsInEffect:]
-[FCAllowance dayIsInEffect:]
-[FCAllowance effectivity]
-[FCAllowance setEffectivity:]
-[FCAllowance description]
-[FCAllowance _dictionary]
-[FCAllowance timeLimitSeconds]
-[FCAllowance setTimeLimitSeconds:]
-[FCAllowance fromDay]
-[FCAllowance setFromDay:]
-[FCAllowance toDay]
-[FCAllowance setToDay:]
-[FCAllowance tag]
-[FCAllowance setTag:]
-[FCAllowance span]
-[FCAllowance setSpan:]
-[FCLimitItem dealloc]
-[FCLimitItem init]
-[FCLimitItem initWithDictionary:]
+[FCLimitItem limitItemWithLimitItem:]
+[FCLimitItem limitItemWithDictionary:]
+[FCLimitItem limitItemWithBundleID:]
+[FCLimitItem limitItemWithURL:]
+[FCLimitItem computerLimit]
+[FCLimitItem allLimitsForUser:]
+[FCLimitItem limitWithID:forUser:]
+[FCLimitItem computerLimitForUser:]
+[FCLimitItem computerLimitFromArray:]
-[FCLimitItem isComputer]
-[FCLimitItem isProgram]
-[FCLimitItem isWebSite]
-[FCLimitItem plistRepresentation]
-[FCLimitItem uniqueID]
-[FCLimitItem hasActiveSchedule]
-[FCLimitItem scheduleDescription]
-[FCLimitItem briefDescription]
-[FCLimitItem weekdayAllowance]
-[FCLimitItem weekendAllowance]
-[FCLimitItem setWeekdayAllowanceSeconds:]
-[FCLimitItem setWeekendAllowanceSeconds:]
-[FCLimitItem removeWeekdayAllowance]
-[FCLimitItem removeWeekendAllowance]
-[FCLimitItem description]
-[FCLimitItem _dictionary]
-[FCLimitItem itemType]
-[FCLimitItem setItemType:]
-[FCLimitItem enabled]
-[FCLimitItem setEnabled:]
-[FCLimitItem name]
-[FCLimitItem setName:]
-[FCLimitItem bundleID]
-[FCLimitItem setBundleID:]
-[FCLimitItem path]
-[FCLimitItem setPath:]
-[FCLimitItem curfews]
-[FCLimitItem setCurfews:]
-[FCLimitItem allowancesActive]
-[FCLimitItem setAllowancesActive:]
-[FCLimitItem allowances]
-[FCLimitItem setAllowances:]
-[FCLimitItem timeLastUpdated]
-[FCLimitItem setTimeLastUpdated:]
-[FCFetchRequest dealloc]
+[FCFetchRequest fetchRequestFromNSFetchRequest:]
+[FCFetchRequest fetchRequestFromPlistData:]
-[FCFetchRequest plistData]
-[FCFetchRequest NSFetchRequest]
-[FCFetchRequest entity]
-[FCFetchRequest setEntity:]
-[FCFetchRequest predicate]
-[FCFetchRequest setPredicate:]
-[FCFetchRequest sortDesc1]
-[FCFetchRequest setSortDesc1:]
-[FCFetchRequest sortDesc2]
-[FCFetchRequest setSortDesc2:]
_FCAppIsSignedByApple.requirementData
_FCAppIsSignedByAppStore.requirementData
_RandomString.validChars
GCC_except_table10
GCC_except_table12
GCC_except_table28
GCC_except_table29
GCC_except_table5
GCC_except_table7
GCC_except_table9
GCC_except_table0
GCC_except_table1
GCC_except_table0
GCC_except_table19
GCC_except_table25
GCC_except_table32
GCC_except_table35
GCC_except_table39
GCC_except_table2
GCC_except_table3
GCC_except_table5
GCC_except_table6
GCC_except_table0
GCC_except_table3
GCC_except_table4
GCC_except_table33
GCC_except_table43
GCC_except_table44
GCC_except_table45
GCC_except_table46
GCC_except_table47
GCC_except_table3
_IsCriticalTool.criticalApps
_FCMacIsInRecovery.sInRoceveryMode
_GetFCPort.s_mach_port
_MyStandardizePath.sCurrentDirectoryPath
_GetICUData.sFetchedData
_gKeychainForCodesigning
_IsExecutableThatGetsCorruptedByCodesigning.sCodeSigningExceptionBundleIDs
_IsExecutableThatGetsCorruptedByCodesigning.sCodeSigningExceptionCreatorCodes
_gHasMCXNotification
_gFCALRLock
_FCCreateAppSignature.sCopyUserSigningIdentityFailed
_gUserCache
_GetICUData2.sFetchedData
_FCAppIsSigned
_FCAppIsSignedByAppStore
_FCAppIsSignedByApple
_FCAppLaunchWasBlocked
_FCAuthorizeManagedUserLogin
_FCContentFilterPageWasBlocked
_FCCopyAppDisplayNameForUser
_FCCopyBundleIDFudgingIfNecessary
_FCCopyBundleNameFudgingIfNecessary
_FCCopyDetachedSignature
_FCCopyInfoDictFudgingIfNecessary
_FCCopyInstalledApplications
_FCCreateAppSignature
_FCCreateDesignatedRequirement
_FCCreateTempKeychainForCodesigning
_FCExistsManagedUsers
_FCFindAppPathsAtPath
_FCFirstWeekday
_FCFirstWeekendDay
_FCFolderForUserName
_FCFrameworkLog
_FCGetAllWidgetPaths
_FCGetAppPathsAtPath
_FCGetAppPathsAtPathOLD
_FCGetLocalManagedUsers
_FCGetStringFromOSType
_FCHasAppLaunchRestrictions
_FCInitAppLaunchRestrictions
_FCIsAppAllowedToLaunch
_FCIsAppAllowedToLaunchExt
_FCLastWeekday
_FCLastWeekendDay
_FCLaunchDaemon
_FCMacIsInRecovery
_FCMailAddToWhiteList
_FCMailRemoveFromWhiteList
_FCManagedDomainsForUser
_FCManagedPreferencesDirectoryForUserName
_FCNextForcedUserLogout
_FCNotifyKernelOfDetachedSignature
_FCPrefDomainsRequireDaemon
_FCPreferredLanguageForUserName
_FCReverseDayMapping
_FCSafariAddToWhiteList
_FCSafariCopyExistingBookmarks
_FCSafariCreateBookmarksFromFlatArray
_FCSafariGetWhiteListForUser
_FCSafariHasWebSiteRestrictions
_FCSafariPageWasBlocked
_FCSafariRemoveFromWhiteList
_FCSafariVisitedPage
_FCSafariWriteBookmarks
_FCSafariWriteUserBookmarksToBookmarksFile
_FCStandardDayMapping
_FCTimeDurationString
_FCUserCanLogin
_FCValidateSignedApplication
_FCWeekdayWithOffset
_FCWeekendDayWithOffset
_FCWeekendLength
_FCWorkWeekLength
_FCiChatSaveChatLog
_GetICUWeekdayWeekendInfo
_GetUserShortNameForUID
_OBJC_CLASS_$_FCAllowance
_OBJC_CLASS_$_FCAllowanceTimeControl
_OBJC_CLASS_$_FCApp
_OBJC_CLASS_$_FCCurfewTimeControl
_OBJC_CLASS_$_FCCurfews
_OBJC_CLASS_$_FCFetchRequest
_OBJC_CLASS_$_FCLimitItem
_OBJC_CLASS_$_FCMCXHelper
_OBJC_CLASS_$_FCSafariBookmark
_OBJC_CLASS_$_FCSafariBookmarkFolder
_OBJC_CLASS_$_FCSafariBookmarkManager
_OBJC_CLASS_$_FCTime
_OBJC_CLASS_$_FCTimeControl
_OBJC_CLASS_$_FCTimeControls
_OBJC_CLASS_$_FCTimeRange
_OBJC_CLASS_$_FCTimer
_OBJC_CLASS_$_FCUserEventsManager
_OBJC_CLASS_$_FCUtilities
_OBJC_CLASS_$_FCWidget
_OBJC_IVAR_$_FCAllowance._dictionary
_OBJC_IVAR_$_FCAllowanceTimeControl._secondsPerDay
_OBJC_IVAR_$_FCApp._dictionary
_OBJC_IVAR_$_FCCurfewTimeControl._end
_OBJC_IVAR_$_FCCurfewTimeControl._start
_OBJC_IVAR_$_FCCurfews._dictionary
_OBJC_IVAR_$_FCFetchRequest._entity
_OBJC_IVAR_$_FCFetchRequest._predicate
_OBJC_IVAR_$_FCFetchRequest._sortDesc1
_OBJC_IVAR_$_FCFetchRequest._sortDesc2
_OBJC_IVAR_$_FCLimitItem._dictionary
_OBJC_IVAR_$_FCMCXHelper._mcxHelper
_OBJC_IVAR_$_FCMCXHelper._mcxManager
_OBJC_IVAR_$_FCSafariBookmark._dictionary
_OBJC_IVAR_$_FCSafariBookmarkFolder._children
_OBJC_IVAR_$_FCSafariBookmarkManager._dataLoaded
_OBJC_IVAR_$_FCSafariBookmarkManager._dictionary
_OBJC_IVAR_$_FCSafariBookmarkManager._fileVersion
_OBJC_IVAR_$_FCSafariBookmarkManager._path
_OBJC_IVAR_$_FCTime._hour
_OBJC_IVAR_$_FCTime._minute
_OBJC_IVAR_$_FCTime._second
_OBJC_IVAR_$_FCTimeControl._enabled
_OBJC_IVAR_$_FCTimeControl._rangeType
_OBJC_IVAR_$_FCTimeControls._weekdayAllowance
_OBJC_IVAR_$_FCTimeControls._weekdayCurfew
_OBJC_IVAR_$_FCTimeControls._weekendAllowance
_OBJC_IVAR_$_FCTimeControls._weekendCurfew
_OBJC_IVAR_$_FCTimeRange._endTime
_OBJC_IVAR_$_FCTimeRange._startTime
_OBJC_IVAR_$_FCTimer._interval
_OBJC_IVAR_$_FCTimer._kind
_OBJC_IVAR_$_FCTimer._timer
_OBJC_IVAR_$_FCTimer._userInfo
_OBJC_IVAR_$_FCUserEventsManager._authData
_OBJC_IVAR_$_FCUserEventsManager._registeredWithServer
_OBJC_IVAR_$_FCUserEventsManager._userName
_OBJC_IVAR_$_FCWidget._dictionary
_OBJC_METACLASS_$_FCAllowance
_OBJC_METACLASS_$_FCAllowanceTimeControl
_OBJC_METACLASS_$_FCApp
_OBJC_METACLASS_$_FCCurfewTimeControl
_OBJC_METACLASS_$_FCCurfews
_OBJC_METACLASS_$_FCFetchRequest
_OBJC_METACLASS_$_FCLimitItem
_OBJC_METACLASS_$_FCMCXHelper
_OBJC_METACLASS_$_FCSafariBookmark
_OBJC_METACLASS_$_FCSafariBookmarkFolder
_OBJC_METACLASS_$_FCSafariBookmarkManager
_OBJC_METACLASS_$_FCTime
_OBJC_METACLASS_$_FCTimeControl
_OBJC_METACLASS_$_FCTimeControls
_OBJC_METACLASS_$_FCTimeRange
_OBJC_METACLASS_$_FCTimer
_OBJC_METACLASS_$_FCUserEventsManager
_OBJC_METACLASS_$_FCUtilities
_OBJC_METACLASS_$_FCWidget
_ReversePathComponentCountSort
_SortDescFromDict
_SortDictFromDesc
_UIDForShortName
_UUIDString
_UserIsLoggedIn
__FCMIGAppCanLaunch
__FCMIGAppCanSublaunch
__FCMIGAppLaunchBlocked
__FCMIGAppSublaunchBlocked
__FCMIGClearLogsForUser
__FCMIGContentFilterPageWasBlocked
__FCMIGContentFilterPageWasVisited
__FCMIGCreateMOCProxyForUser
__FCMIGExecuteRequestForUser
__FCMIGHasAppLaunchRestrictions
__FCMIGLaunch
__FCMIGListeningStatusChanged
__FCMIGMailAddContactsToWhiteList
__FCMIGMailRemoveContactFromWhiteList
__FCMIGNextForcedUserLogout
__FCMIGNotifyKernelOfDetachedSignature
__FCMIGOverrideTimeControls
__FCMIGOverrideWebBlock
__FCMIGReadOverrides
__FCMIGReadSettings
__FCMIGReleaseMOCProxyForUser
__FCMIGResetUsageData
__FCMIGSafariReadExistingBookmarks
__FCMIGSafariVisitedPage
__FCMIGSafariWriteBookmarks
__FCMIGSaveUsageData
__FCMIGUserCanLogin
__FCMIGiChatSaveChatLog
_gAppStoreLimitMapping
_gFCFrameworkLoggingLevel
_gICUInfo
_gUserName
_gWebBlackList
_gWebWhiteList
_kFCAppStoreIdentifier
_kFCApplicationAccessIdentifier
_kFCContentFilterIdentifier
_kFCHIToolboxIdentifier
_kFCLimitsList
_kFCListeningFilePath
_kFCLoggingIdentifier
_kFCOldApplicationAccessIdentifier
_kFCRemoteConnectionActionKey
_kFCRemoteConnectionAppListKey
_kFCRemoteConnectionBundleIDsKey
_kFCRemoteConnectionClearLogs
_kFCRemoteConnectionCreateMOCProxy
_kFCRemoteConnectionDisposeMOCProxy
_kFCRemoteConnectionEntityNameKey
_kFCRemoteConnectionErrorStringKey
_kFCRemoteConnectionExecuteQuery
_kFCRemoteConnectionGetAppListAction
_kFCRemoteConnectionGetMiscSettingsAction
_kFCRemoteConnectionIsPrintAdminFlag
_kFCRemoteConnectionMessageIDKey
_kFCRemoteConnectionNameKey
_kFCRemoteConnectionPasswordKey
_kFCRemoteConnectionQueryDataKey
_kFCRemoteConnectionQueryResultKey
_kFCRemoteConnectionReadSettingsAction
_kFCRemoteConnectionServerVersionKey
_kFCRemoteConnectionSetPrintAdmin
_kFCRemoteConnectionUIDKey
_kFCRemoteConnectionUpdateAppWhiteList
_kFCRemoteConnectionUserNameKey
_kFCSysPrefsRestricted
_kFCTimeLimits
_kFCTimeLimitsIdentifier
_kFCTimeLimitsIdentifierV2
_kWFDebugMessageKey
_kWFDebugPageKey
_kWFFilterDescriptionKey
_kWFFilterRestrictedScoreKey
_kWFFilterWantsToBlockKey
_kWFPageTitleKey
_kWFURLKey
_kWFUsernameKey
_AuthorizationMakeExternalForm
_CFAllocatorGetDefault
_CFArrayGetCount
_CFArrayGetTypeID
_CFArrayGetValueAtIndex
_CFBundleCopyInfoDictionaryForURL
_CFBundleCreate
_CFBundleGetInfoDictionary
_CFBundleGetValueForInfoDictionaryKey
_CFDataCreateWithBytesNoCopy
_CFDataGetBytePtr
_CFDataGetLength
_CFDictionaryAddValue
_CFDictionaryCreate
_CFDictionaryCreateMutable
_CFDictionaryGetValue
_CFDictionarySetValue
_CFErrorCopyDescription
_CFGetTypeID
_CFMakeCollectable
_CFNotificationCenterAddObserver
_CFNotificationCenterGetDistributedCenter
_CFPreferencesCopyValue
_CFPropertyListCreateData
_CFPropertyListCreateDeepCopy
_CFPropertyListIsValid
_CFRelease
_CFRetain
_CFShow
_CFStringCreateWithFormat
_CFStringGetFileSystemRepresentation
_CFStringGetLength
_CFURLCopyFileSystemPath
_CFURLCreateWithFileSystemPath
_CFUUIDCreate
_CFUUIDCreateString
_CGSSessionCopyAllSessionProperties
_LSCopyItemInfoForURL
_NDR_record
_NSCalendarIdentifierGregorian
_NSDefaultRunLoopMode
_NSFileGroupOwnerAccountID
_NSFileGroupOwnerAccountName
_NSFileOwnerAccountID
_NSFileOwnerAccountName
_NSFilePosixPermissions
_NSHomeDirectoryForUser
_NSLocalizedFailureReasonErrorKey
_NSLog
_NSSearchPathForDirectoriesInDomains
_NSSelectorFromString
_NSStringFromSelector
_NSUserName
_OBJC_CLASS_$_CACertInfo
_OBJC_CLASS_$_CAExtendedKeyUsageExtension
_OBJC_CLASS_$_ISPurchaseReceipt
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCalendar
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateComponents
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFetchRequest
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTask
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_ODNode
_OBJC_CLASS_$_ODQuery
_OBJC_CLASS_$_ODSession
_OBJC_CLASS_$_SFAuthorization
_OBJC_CLASS_$_SFCertificateAuthority
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_NSObject
_OSSpinLockLock
_OSSpinLockUnlock
_SecCertificateCreateWithData
_SecCodeCopyDesignatedRequirement
_SecCodeCopySigningInformation
_SecCodeSetDetachedSignature
_SecCodeSignerAddSignature
_SecCodeSignerCreate
_SecIdentityCreateWithCertificate
_SecItemCopyMatching
_SecKeychainCopyDefault
_SecKeychainCreate
_SecKeychainDelete
_SecKeychainGetPath
_SecKeychainSetDefault
_SecKeychainSetPreferenceDomain
_SecKeychainUnlock
_SecPolicyCreateWithProperties
_SecRequirementCopyData
_SecRequirementCreateWithData
_SecStaticCodeCheckValidity
_SecStaticCodeCreateWithPath
__CFBundleCreateWithExecutableURLIfLooksLikeBundle
__LSCopyAllApplicationURLs
__Unwind_Resume
___CFConstantStringClassReference
___error
___memcpy_chk
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
___stderrp
__objc_empty_cache
_asprintf
_bootstrap_look_up2
_bootstrap_port
_close
_fflush
_floor
_fprintf
_fputc
_free
_fts_close$INODE64
_fts_open$INODE64
_fts_read$INODE64
_fwrite
_getpwnam
_getpwuid
_getuid
_getxattr
_kCFAllocatorDefault
_kCFAllocatorNull
_kCFBooleanTrue
_kCFBundleExecutableKey
_kCFBundleIdentifierKey
_kCFBundleNameKey
_kCFCopyStringDictionaryKeyCallBacks
_kCFManagedPreferencesMCXObjectName
_kCFNull
_kCFPreferencesAnyApplication
_kCFPreferencesAnyHost
_kCFPreferencesAnyUser
_kCFPreferencesCurrentHost
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kSecAttrLabel
_kSecClass
_kSecClassCertificate
_kSecCodeInfoIdentifier
_kSecCodeSignerDetached
_kSecCodeSignerIdentity
_kSecCodeSignerResourceRules
_kSecMatchCaseInsensitive
_kSecMatchEmailAddressIfPresent
_kSecMatchPolicy
_kSecPolicyAppleCodeSigning
_kSecReturnRef
_lstat$INODE64
_mach_msg
_malloc
_mig_dealloc_reply_port
_mig_deallocate
_mig_get_reply_port
_mig_put_reply_port
_mkstemp
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_begin_catch
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_setProperty
_objc_terminate
_open
_pread
_random
_srandom
_sscanf
_stat$INODE64
_statfs$INODE64
_strcmp
_strlen
_strncmp
_strnstr
_syslog
_time
_unlink
_ures_close
_ures_getByKey
_ures_getByKeyWithFallback
_ures_getIntVector
_ures_open
_voucher_mach_msg_set
dyld_stub_binder
