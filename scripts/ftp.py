import os
import ftputil
import ftputil.session

def upload_dir(root):
    root = unicode(root, 'utf-8')
    for dir_name, _, dir_files in os.walk(root):
        local = os.path.join(os.curdir, dir_name)
        remote = ftp_host.path.join(ftp_host.curdir, dir_name)

        if not ftp_host.path.exists(remote):
            print 'mkdir:', local, '->', remote
            ftp_host.mkdir(remote)

        for f in dir_files:
            local_f = os.path.join(local, f)
            remote_f = ftp_host.path.join(remote, f)
            print 'upload:', local_f, '->', remote_f
            ftp_host.upload(local_f, remote_f)

sf = ftputil.session.session_factory(use_passive_mode=True)

with ftputil.FTPHost('lory.livezey.net', 'llivezey', 'xxx', session_factory=sf) as ftp_host:
    upload_dir('DIR')
