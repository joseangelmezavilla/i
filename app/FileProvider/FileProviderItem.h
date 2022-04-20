//
//  FileProviderItem.h
//  iSHFiles
//
//  Created by Theodore Dubois on 9/20/18.
//

#import <FileProvider/FileProvider.h>
#include "kernel/fs.h"

@interface FileProviderItem : NSObject <NSFileProviderItem>

- (instancetype)initWithIdentifier:(NSFileProviderItemIdentifier)identifier mount:(struct mount *)mount error:(NSError *_Nullable *)err;
- (void)copyToURL:(NSURL *)url;
- (void)copyFromURL:(NSURL *)url;

@property (readonly) struct fd *fd;

@end
