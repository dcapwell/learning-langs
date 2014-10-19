# Most of my systems are CentOS/RHEL 6 based, so using that as a base
FROM centos:centos6

RUN yum update -y
RUN yum groupinstall -y "development tools"
# required or man pages won't ever be put on disk (though packages will install)
# http://superuser.com/a/817649
RUN \
  sed -i '/excludedocs/d' /etc/rpm/macros.imgcreate && \
  sed -i '/nodocs/d' /etc/yum.conf
RUN yum install -y vim man man-pages
